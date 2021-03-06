#include <iostream>
#include <cstdlib>
using namespace std;

void QuickSort(int *arr, int left, int right) {
    int l = left;
    int r = right - 1;
    int size = right - left;
    
    if(size > 1) {
        int pivot = arr[rand() % size + l];
        while(l < r) {
            while(arr[r] > pivot && r > l) {
                r--;
            }
            while(arr[l] < pivot && l <= r) {
                l++;
            }
            if(l < r) {
                swap(arr[l], arr[r]);
                l++;
            }
        }
        QuickSort(arr, left, l);
        QuickSort(arr, r, right);
    }
}

void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    
    int size = 10;
    
    int array[] = {23,45,43,12,23,56,34,67,786,2345};
    
    QuickSort(array, 0, size);
    
    printArray(array, size);

    return 0;
}