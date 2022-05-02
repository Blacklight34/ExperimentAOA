#include <stdio.h>
int LinearSearch(int * arr, int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main() {
    //Insertion Sort
    int arr[6] = {5,23,34,-9,78,4};
    int size = 6;
    int key = 78;
    // LinearSearch(arr, size, key);
    printf("Found at index %d", LinearSearch(arr, size, key) + 1);
}
