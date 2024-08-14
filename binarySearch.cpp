#include "binarySearch.h"
#include <vector>

int binarySearch(std::vector<int> list, int val) {
	int low = 0;
	int high = list.size() - 1;

	while (low <= high) {
		int med = low + ((high - low) / 2);
		if (list[med] < val) {
			low = med + 1;
		}
		else if (list[med] > val) {
			high = med - 1;
		}
		else {
			return med;
		}
	};

	return -1;
}