#include <iostream>
#include <vector>
#include "printList.h"

// Sort
#include "bubbleSort.h"
#include "quickSort.h"

// Search
#include "linearSearch.h"
#include "binarySearch.h"

int main()
{
    std::vector<int> arr = {72, 5, 123, 7, 34, 8, 23, 9, 10, 12, 87, 9, 321, 674, 34, 9};
    
    // Sort
    std::cout << "Before Sort:" << std::endl;
    printList(arr);
    std::cout << std::endl;

    // Bubble Sort
    std::cout << "Bubble Sort Reverse:" << std::endl;
    bubbleSort(arr, true);
    printList(arr);
    std::cout << "Bubble Sort:" << std::endl;
    bubbleSort(arr, false);
    printList(arr);
    std::cout << std::endl;

    // Quicksort
    std::cout << "Before quicksort:" << std::endl;
    arr = { 72, 5, 123, 7, 34, 8, 23, 9, 10, 12, 87, 9, 321, 674, 34, 9 };
    printList(arr);
    std::cout << std::endl;

    std::cout << "Quicksort" << std::endl;
    quickSort(arr);
    printList(arr);
    std::cout << std::endl;


    // Search
    // Linear Search
    std::cout << "Linear Search: " << std::endl;
    std::cout << "Number: 12, Index: " << linearSearch(arr, 12) << std::endl;
    std::cout << std::endl;

    // Binary Search
    std::cout << "Binary Search: " << std::endl;
    std::cout << "Number: 34, Index: " << binarySearch(arr, 34) << std::endl;
    std::cout << "Number: 5, Index: " << binarySearch(arr, 5) << std::endl;
    std::cout << "Number: 321, Index: " << binarySearch(arr, 321) << std::endl;
    std::cout << "Number: 9, Index: " << binarySearch(arr, 9) << std::endl;
    std::cout << "Number: 12, Index: " << binarySearch(arr, 12) << std::endl;
    std::cout << std::endl;


    return 0;
}
