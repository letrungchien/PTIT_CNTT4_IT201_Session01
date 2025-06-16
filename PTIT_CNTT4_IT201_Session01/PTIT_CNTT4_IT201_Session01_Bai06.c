#include <stdio.h>
int main() {
    int arr[]={ 1 ,2,3,2,3,5,7};
    int check=0;
    int x;
    printf("moi ban nhap so muon kiem tra lan lap");
    scanf("%d",&x);
    for(int i=0;i<5;i++) {
        if(arr[i]==x) {
            check+=1;
        }
    }
    printf("số lần xuất hiện của %d trong mảng là : %d ",x,check);
    return 0;
}
// độ phức tạp là O(n)