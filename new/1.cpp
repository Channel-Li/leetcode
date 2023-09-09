#include <stdio.h>

int main() {

    int arr[10]={3,5,7,2,9,0,6,1,8,4};//待排序
//    冒泡排序：假设数组的长度为N ，那么进行N轮循环，每一轮循环将最大的数放到后面去
    int temp;
//每次循环中从一第一个数开始，两个两个进行比较大的放后面

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){
        _Bool flag =0;
        for (int j = 1; j < 10-i; ++j) {
            if(arr[j]<arr[j-1]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                flag=1;
            }

        }

        if(flag==0){
            break;
        }

    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){
        printf("%d\n",arr[i]);
    }
    return 0;
}

