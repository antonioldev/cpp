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
	int n = pend.size();
	Container insertionSequence;
	insertionSequence.push_back(1);
	int nextTk = 3;
	while (nextTk <= n)
	{
		insertionSequence.push_back(nextTk);
		nextTk = nextTk * 2 - 1;
	}
	for (size_t seqIndex = 0; seqIndex < insertionSequence.size(); ++seqIndex)
	{
		int tk = insertionSequence[seqIndex];
		if (tk > n)
			break;
		for (int j = tk; j > (seqIndex > 0 ? insertionSequence[seqIndex - 1] : 0); --j)
		{
			if (j > n)
				continue;
			int key = pend[j - 1];
			
			int pos = binarySearch(mainChain, key);
			mainChain.insert(mainChain.begin() + pos, key);
		}
	}
}

template <typename Container> // 2->  Sort using merge insertion based on mainChain
void PmergeMe::sortMainChain(Container& mainChain, Container& pend)
{
	// for (size_t i = 1; i < mainChain.size(); ++i)
	// {
	// 	int keyMain = mainChain[i];
	// 	int keyPend = pend[i];
	// 	size_t j = i;
	// 	while (j > 0 && mainChain[j - 1] > keyMain)
	// 	{
	// 		mainChain[j] = mainChain[j - 1];
	// 		pend[j] = pend[j -1];
	// 		--j;
	// 	}
	// 	mainChain[j] = keyMain;
	// 	pend[j] = keyPend;
	// }
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