#include <stdio.h>

    void bubble_sort(int arr[], int n){
        for (int i =0;i<n-1;i++) {
            for (int j=0;j<n-i-1;j++) {
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;

                }
            }
        }
    }
int main() {
        int arr[]={7,3,2,8,0,6};
        int n = sizeof(arr)/sizeof(arr[0]);
        bubble_sort(arr, n);
        for(int i=0;i<n;i++) {
            printf("%d ", arr[i]);
        }
        return 0;
    }
// Độ phức tạp của thuật toán là O(n^2)