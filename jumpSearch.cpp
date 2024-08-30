#include "jumpSearch.h"
#include <vector>

int jumpSearch(std::vector<int> list, int val) {
	int n = list.size();
	int jump = sqrt(n);

	int prev = 0;
	int i = jump;

	while (i < n || list[i] < val) {
		prev = i;
		i += jump;
	}

	while (prev < n) {
		if (list[prev] == val) {
			return prev;
		}
		++prev;
	}

	return -1;
}