#include <stdio.h>
void InsertionSort(int * arr, int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int curr = arr[i];
        while(j >= 0 && arr[j] > curr){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
int main() {
    //Insertion Sort
    int arr[6] = {5,23,34,-9,78,4};
    int size = 6;
    InsertionSort(arr, size);
    // printf("Hello World!");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
