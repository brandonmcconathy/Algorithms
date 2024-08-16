#include "bubbleSort.h"
#include <vector>

void bubbleSort(std::vector<int>& list, bool reverse) {
	int n = list.size();

	if (reverse) {
		for (int i = 0; i < n - 1; ++i) {
			for (int j = 0; j < n - i - 1; ++j) {
				if (list[j] < list[j + 1]) {
					int temp = list[j + 1];
					list[j + 1] = list[j];
					list[j] = temp;
				}
			}
		}
	}
	else {
		for (int i = 0; i < n - 1; ++i) {
			for (int j = 0; j < n - i - 1; ++j) {
				if (list[j] > list[j + 1]) {
					int temp = list[j + 1];
					list[j + 1] = list[j];
					list[j] = temp;
				}
			}
		}
	}
	
}