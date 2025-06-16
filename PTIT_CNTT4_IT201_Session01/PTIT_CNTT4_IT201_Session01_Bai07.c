//
// Created by Admin on 16/06/2025.

#include <stdio.h>
// C1
int checkCoPhanTuTrungLap(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i]==arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}
// C1 có độ phức tạp là O(n^2)


// C2
 int checkCoPhanTuTrungLap(int arr[],int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
    for (int i=0;i<n-1;i++) {
        if (arr[i] == arr[i+1]) {
            return 1;
        }
        return 0;
    }
}
 //cách 2 độ phức tạp là O(n^2)+O(n)