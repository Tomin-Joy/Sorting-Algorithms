#include <iostream>
using namespace std;

void swap(int *a, int *b) {  //swaping function
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {     //sorting function
    int min; // index of smallest element
    for(int k=0; k < n-1; k++) {
        min = k;
        for(int j=k+1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[k]);
    }
}

void printArray(int arr[], int size) { //printing function
    for (int i =0; i < size; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = {3, 2, 45, 6, 5, 7, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}