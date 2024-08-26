#include "mergeSort.h"
#include <vector>

static std::vector<int> merge(std::vector<int> left, std::vector<int> right) {

	std::vector<int> sortedList;
	int l = 0;
	int r = 0;
	while (sortedList.size() != left.size() + right.size()) {
		if (r >= right.size() || left[l] < right[r]) {
			sortedList.push_back(left[l]);
			++l;
		}
		else {
			sortedList.push_back(right[r]);
			++r;
		}
	}
	return sortedList;
}

static std::vector<int> mergeHelper(std::vector<int> list) {
	if (list.size() <= 1) {
		return list;
	}

	std::vector<int> sortedLeft(list.begin(), list.begin() + list.size() / 2);
	std::vector<int> sortedRight((list.begin() + list.size() / 2) + 1, list.end());

	return merge(sortedLeft, sortedRight);
}

void mergeSort(std::vector<int>& list) {
	if (list.size() <= 1) {
		return;
	}
	list = mergeHelper(list);
}