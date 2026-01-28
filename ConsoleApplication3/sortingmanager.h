#pragma once
#include <iostream>
namespace Small_Data_Sets {
	namespace SelectSort_Manager{
		void selectionSort(int array[]);
	}
	namespace BubbleSort_Manager{

	}
	namespace InsertionSort_Manager {

	}
	namespace _Manager {

	}
}
namespace Big_Data_Sets {
	namespace MergeSort_Manager {

	}
	namespace QuickSort_Manager{
		void quickSort(int array[], int start, int end);
		static int partition(int array[], int start, int end);
	}
}