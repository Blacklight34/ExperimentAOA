#include <stdio.h>
// int temp[5];
void merge(int * arr, int l, int mid, int h){
    int i = l, j = mid + 1, k = l;
    int temp[h];
    while(i <= mid && j <= h){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            k++, i++;
        }
        else{
            temp[k] = arr[j];
            k++, j++;
        }
    }
    if(i > mid){
        while(j <= h){
            temp[k] = arr[j];
            k++, j++;
        }
    }
    else{
        while(i <= mid){
            temp[k] = arr[i];
            k++, i++;
        }
    }
    for(int i = l; i <= h; i++){
        arr[i] = temp[i];
    }
}
void mergeSort(int * arr, int l, int h){
    if(l >= h) return;
    int mid = l + (h - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, h);
    merge(arr, l, mid, h);
}
int main() {    
    int arr[] = {90,34,0,3,23, -9, 43, 34};
    mergeSort(arr, 0, 8);
    printf("Work Done\n");
    for(int i = 0; i < 8; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
