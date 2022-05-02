#include <stdio.h>
int swap(int *t1, int *t2){
    int temp = *t1;
    *t1 = *t2;
    *t2 = temp;
}
void SelectionSort(int * arr, int n){
    for(int i = 0; i < n; i++){
        int minIndex = i;
        int min = arr[i];
        for(int j = i + 1; j < n; j++){
            if(arr[j] < min){
                min = arr[j];
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
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
    SelectionSort(arr, size);
    // printf("Hello World!");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
