#include <vector>
#include "linearSearch.h"

int linearSearch(std::vector<int> list, int val) {
	for (int i = 0; i < list.size(); ++i) {
		if (val == list[i]) {
			return i;
		}
	}
	return -1;
}