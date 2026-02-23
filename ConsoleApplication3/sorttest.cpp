#include<iostream>
#include "sortingmanager.h"

int main() {
	int arr[] = { 3, 6, 4, 5, 1, 8, 9, 2, 7 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	int arr2[] = { 3, 6, 4, 5, 1, 8, 9, 2, 7 };

	int bigArr[] = {
    23, 87, 45, 12, 56, 78, 34, 90, 11, 67,
    4, 29, 81, 36, 52, 99, 15, 41, 63, 70,
    8, 47, 58, 22, 94, 6, 33, 77, 18, 65,
    91, 2, 49, 73, 30, 84, 10, 39, 61, 14,
    55, 28, 79, 3, 42, 66, 20, 88, 7, 53,
    31, 76, 19, 48, 92, 5, 37, 64, 21, 85,
    13, 44, 69, 1, 57, 25, 80, 9, 35, 60,
    26, 83, 16, 50, 71, 12, 38, 68, 24, 95,
    17, 46, 62, 27, 89, 32, 74, 40, 82, 6,
    51, 29, 75, 43, 97, 11, 59, 34, 90, 22
	};

	int bigArr2[] = {
    23, 87, 45, 12, 56, 78, 34, 90, 11, 67,
    4, 29, 81, 36, 52, 99, 15, 41, 63, 70,
    8, 47, 58, 22, 94, 6, 33, 77, 18, 65,
    91, 2, 49, 73, 30, 84, 10, 39, 61, 14,
    55, 28, 79, 3, 42, 66, 20, 88, 7, 53,
    31, 76, 19, 48, 92, 5, 37, 64, 21, 85,
    13, 44, 69, 1, 57, 25, 80, 9, 35, 60,
    26, 83, 16, 50, 71, 12, 38, 68, 24, 95,
    17, 46, 62, 27, 89, 32, 74, 40, 82, 6,
    51, 29, 75, 43, 97, 11, 59, 34, 90, 22
	};
	int bigArrSize = sizeof(bigArr) / sizeof(bigArr[0]);

	int size = 0;
	std::cout << "SelectionSort: " << std::endl;
	Small_Data_Sets::SelectSort_Manager::selectionSort(arr, arrSize);
	std::cout << "--------------------" << std::endl;	
	for (auto i: arr){	
		std::cout << i << " ";
	}
	std::cout << "\n--------------------" << std::endl;
	std::cout << "QuickSort: " << std::endl;
	Big_Data_Sets::QuickSort_Manager::quickSort(bigArr, 0 , bigArrSize-1);
	std::cout << "--------------------" << std::endl;
	int linelength = 0;
	for (auto i : bigArr) {
		std::cout << i << " ";
		linelength++;
		if (linelength % 10 == 0) {
			std::cout << "\n";
		}
	}
	std::cout << "\n--------------------" << std::endl;

}
