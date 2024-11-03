#include "PmergeMe.hpp"

void PmergeMe::createVectorPairs(std::vector<int>& mainChain, std::vector<int>& pend)
{
	for (int i = 0; i + 1 < (int)vector.size(); i += 2)
	{
		if (vector[i] < vector[i + 1])
			std::swap(vector[i], vector[i + 1]);

		mainChain.push_back(vector[i]);
		pend.push_back(vector[i + 1]);
	}
}

int binarySearchInsertIndex(const std::vector<int>& mainChain, int target)
{
	int left = 0;
	int right = mainChain.size() - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (mainChain[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return left;
}

void PmergeMe::insertToMainChainVector(std::vector<int>& mainChain, std::vector<int>& pend)
{
	for (int i = 0; i < (int)pend.size(); ++i)
	{
		int target = pend[i];
		int insertionIndex = binarySearchInsertIndex(mainChain, target);
		mainChain.insert(mainChain.begin() + insertionIndex, target);
	}
	if (vector.size() % 2 != 0)
	{
		int target = vector.back();
		int insertionIndex = binarySearchInsertIndex(mainChain, target);
		mainChain.insert(mainChain.begin() + insertionIndex, target);
	}

}

// Function to perform Insertion Sort on a subarray
static void insertionSort(std::vector<int>& arr, int left, int right)
{
	for (int i = left + 1; i <= right; ++i)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= left && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

// Function to merge two sorted subarrays
static void merge(std::vector<int>& arr, int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;

	std::vector<int> leftArr(n1);
	std::vector<int> rightArr(n2);
	for (int i = 0; i < n1; ++i)
		leftArr[i] = arr[left + i];
	for (int i = 0; i < n2; ++i)
		rightArr[i] = arr[mid + 1 + i];
	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2)
	{
		if (leftArr[i] <= rightArr[j])
		{
			arr[k] = leftArr[i];
			++i;
		}
		else
		{
			arr[k] = rightArr[j];
			++j;
		}
		++k;
	}
	while (i < n1)
	{
		arr[k] = leftArr[i];
		++i;
		++k;
	}
	while (j < n2)
	{
		arr[k] = rightArr[j];
		++j;
		++k;
	}
}

// Merge Insertion Sort function
void PmergeMe::mergeInsertionSortVector(std::vector<int>& arr, int left, int right, int threshold)
{
	if (left < right)
	{
		if (right - left + 1 <= threshold)
			insertionSort(arr, left, right);
		else
		{
			int mid = left + (right - left) / 2;
			mergeInsertionSortVector(arr, left, mid, threshold);
			mergeInsertionSortVector(arr, mid + 1, right, threshold);
			merge(arr, left, mid, right);
		}
	}
}


