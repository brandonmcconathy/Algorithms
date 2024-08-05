#include "linearSearch.h"

int linearSearch(vector<int> list, int val) {
	for (int i = 0; i < list.size(); ++i) {
		if (val == list[i]) {
			return i;
		}
	}
	return -1;
}