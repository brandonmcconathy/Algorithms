#include <iostream>
#include <vector>
#include "printList.h"

// Sorting
#include "bubbleSort.h"

// Search
#include "linearSearch.h"
#include "binarySearch.h"

int main()
{
    std::vector<int> arr = {72, 5, 123, 7, 34, 8, 23, 9, 10, 12, 87, 9, 321, 674, 34, 9};
    
    // Sorting
    std::cout << "Before Sort:" << std::endl;
    printList(arr);
    std::cout << std::endl;

    // Bubble Sort
    std::cout << "Bubble Sort:" << std::endl;
    bubbleSort(arr);
    printList(arr);

    // Search
    // Linear Search
    std::cout << "Linear Search: " << linearSearch(arr, 12) << std::endl;

    // Binary Search
    std::cout << "Binary Search: " << binarySearch(arr, 34) << std::endl;

    return 0;
}
