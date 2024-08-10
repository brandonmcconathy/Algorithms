#include <vector>
#include <iostream>
#include "printList.h"

void printList(std::vector<int> list) {
	for (int val : list) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
}