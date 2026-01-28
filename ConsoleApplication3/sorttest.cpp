#include<iostream>
#include "sortingmanager.h"

int main() {
	const int size = 9;
	int arr[size] = { 3, 6, 4, 5, 1, 8, 9, 2, 7 };

	int arr2[size] = { 3, 6, 4, 5, 1, 8, 9, 2, 7 };
	

	std::cout << "SelectionSort: " << std::endl;
	SelectSort_Manager::selectionSort(arr);
	std::cout << "--------------------" << std::endl;
	for (auto i: arr){
		std::cout << i << " ";
	}
	std::cout << "\n--------------------" << std::endl;
	
	std::cout << "QuickSort: " << std::endl;
	QuickSort_Manager::quickSort(arr2, 0 , size-1);
	std::cout << "--------------------" << std::endl;
	for (auto i : arr2) {
		std::cout << i << " ";
	}
	std::cout << "\n--------------------" << std::endl;

}