#include <iostream>
#include <vector>
#include "printList.h"

// Search
#include "linearSearch.h"
#include "binarySearch.h"

// Sorting
#include "bubbleSort.h"

int main()
{
    std::vector<int> arr = {5, 123, 7, 34, 8, 23, 9, 10, 12, 87, 9, 321, 674, 34, 9};

    // Search
    // Linear Search
    std::cout << "Linear Search: " << linearSearch(arr, 12) << std::endl;

    
    // Sorting
    std::cout << "Before Sort:" << std::endl;
    printList(arr);
    std::cout << std::endl;

    // Bubble Sort
    std::cout << "Bubble Sort:" << std::endl;
    bubbleSort(arr);
    printList(arr);

    return 0;
}
