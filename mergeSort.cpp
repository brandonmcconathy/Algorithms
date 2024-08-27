#include "mergeSort.h"
#include <vector>

static void merge(std::vector<int>& list, int left, int mid, int right) {

	int n1 = mid - left + 1;
	int n2 = right - mid;

	std::vector<int> leftList(n1), rightList(n2);

	for (int i = 0; i < n1; ++i) {
		leftList[i] = list[i + left];
	}
	for (int i = 0; i < n2; ++i) {
		rightList[i] = list[i + mid + 1];
	}

	int l = 0;
	int r = 0;
	int k = left;

	while (l < leftList.size() && r < rightList.size()) {
		if (leftList[l] < rightList[r]) {
			list[k] = leftList[l];
			++l;
		}
		else {
			list[k] = rightList[r];
			++r;
		}
		++k;
	}
	while (l < leftList.size()) {
		list[k] = leftList[l];
		++l;
		++k;
	}
	while (r < rightList.size()) {
		list[k] = rightList[r];
		++r;
		++k;
	}
}

static void mergeHelper(std::vector<int>& list, int left, int right) {
	if (left >= right) {
		return;
	}

	int mid = left + (right - left) / 2;
	mergeHelper(list, left, mid);
	mergeHelper(list, mid + 1, right);
	merge(list, left, mid, right);
}

void mergeSort(std::vector<int>& list) {
	if (list.size() <= 1) {
		return;
	}
	mergeHelper(list, 0, list.size() - 1);
}