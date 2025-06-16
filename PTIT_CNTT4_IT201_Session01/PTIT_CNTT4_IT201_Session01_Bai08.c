//
// Created by Admin on 16/06/2025.
//
#include <stdio.h>
int timPhanTuLapNhieuNhat( int arr[],int n,int*solan ) {
    int max =0;
    int mostFrequent =arr[0];
    for(int i=0;i<n;i++) {
        int count=1;
        for (int j=i+1;j<n;j++) {
            if (arr[i]==arr[j]) {
                count++;
            }
        }
        if (count>max) {
            max=count;
            mostFrequent=arr[i];
        }
    }
    *solan=max;
    return mostFrequent;
}
// độ phức tạp của thuật toán O(n^2)