#include "quicksort.h"
#include <vector>

static int partition(std::vector<int>& list, int low, int high) {
	int pivot = list[high];
	int pivotIndex = low - 1;

	for (int i = low; i < high; ++i) {
		if (list[i] <= pivot) {
			pivotIndex++;
			int temp = list[i];
			list[i] = list[pivotIndex];
			list[pivotIndex] = temp;
		}
	}
	pivotIndex++;
	list[high] = list[pivotIndex];
	list[pivotIndex] = pivot;

	return pivotIndex;
}

static void qsHelper(std::vector<int>& list, int low, int high) {
	if (high <= low) {
		return;
	}

	int pivotIndex = partition(list, low, high);

	qsHelper(list, low, pivotIndex - 1);
	qsHelper(list, pivotIndex + 1, high);
}

void quickSort(std::vector<int>& list) {
	qsHelper(list, 0, list.size() - 1);
}