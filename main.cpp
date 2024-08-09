#include <iostream>
#include <vector>
#include "linearSearch.h"
#include "binarySearch.h"

#include "bubbleSort.h"

int main()
{
    std::vector<int> arr;
    arr.push_back(10);
    arr.push_back(12);
    arr.push_back(4);

    // Linear Search
    std::cout << "Linear Search: " << linearSearch(arr, 12) << std::endl;

    return 0;
}
