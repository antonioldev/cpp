template <typename Container>
void PmergeMe::printContainer(const Container& container) const
{
	for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename Container>
int PmergeMe::binarySearch(Container& arr, int valueToMove)
{
	int low = 0,
	high = arr.size() - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (arr[mid] == valueToMove)
			return mid;
		else if (arr[mid] > valueToMove)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return low;
}

template <typename Container> // 3-> Insert the rest of pend int mainChain
void PmergeMe::mergePendingElements(Container& mainChain, Container& pend)
{
	size_t size = pend.size();
	size_t halfSize = size / 2;

	mainChain.insert(mainChain.begin(), pend[0]);
	if (size == 1)
		return;
	for (size_t i = 2; i <= halfSize; i += 2)
	{
		// Insert pend[i] and pend[i - 1] in the correct order
		int valueToInsert = pend[i];
		int pos = binarySearch(mainChain, valueToInsert);
		typename Container::iterator it = mainChain.begin();
		for (int j = 0; j < pos; ++j)
			++it;
		mainChain.insert(it, valueToInsert);

		valueToInsert = pend[i - 1];
		pos = binarySearch(mainChain, valueToInsert);
		it = mainChain.begin();
		for (int j = 0; j < pos; ++j)
			++it;
		mainChain.insert(it, valueToInsert);
	}

	// Perform binary insertion for the second loop (remaining elements in reverse order)
	for (size_t i = size - 1; i >= halfSize; --i)
	{
		int valueToInsert = pend[i];
		int pos = binarySearch(mainChain, valueToInsert);
		typename Container::iterator it = mainChain.begin();
		for (int j = 0; j < pos; ++j)
			++it;
		mainChain.insert(it, valueToInsert);
	}
}

template <typename Container> // 2->  Sort using merge insertion based on mainChain
void PmergeMe::sortMainChain(Container& mainChain, Container& pend)
{
	for (size_t i = 0; i < mainChain.size(); ++i)
	{
		for (size_t j = i + 1; j < mainChain.size(); ++j) {
			if (mainChain[j] < mainChain[i])
			{
				std::swap(mainChain[i], mainChain[j]);
				std::swap(pend[i], pend[j]);
			}
		}
	}
}

template <typename Container> // 1-> Create pairs and separate into mainChain and pend
void PmergeMe::createPairs(Container& mainChain, Container& pend,  Container& source)
{
	mainChain.clear();
	pend.clear();
	int i;
	for (i = 0; i + 1 < (int)source.size(); i += 2)
	{
		if (source[i] < source[i + 1])
			std::swap(source[i], source[i + 1]);
		mainChain.push_back(source[i]);
		pend.push_back(source[i + 1]);
	}
	if (source.size() % 2 == 1)
		pend.push_back(source[i]);
}

template <typename Container>
void PmergeMe::sortContainer(int ac, char** av, Container& container)
{
	container.clear();
	for (int i = 1; i < ac; i++)
		container.push_back(std::atoi(av[i]));
	struct timeval start, end;
	gettimeofday(&start, NULL);
	if (container.size() > 1)
	{
		Container mainChain;
		Container pend;
		createPairs(mainChain, pend, container);
		sortMainChain(mainChain, pend);
		mergePendingElements(mainChain, pend);
		container = mainChain;
	}
	gettimeofday(&end, NULL);
	double timeTaken = (end.tv_sec - start.tv_sec) * 1000.0 + (end.tv_usec - start.tv_usec) / 1000.00;
	
	if (typeid(container) == typeid(std::vector<int>))
		timeVector = timeTaken;
	else if (typeid(container) == typeid(std::deque<int>))
		timeDeque = timeTaken;
}