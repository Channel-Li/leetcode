#include "stdio.h"


void mergeArr(int arr1[],int arr2[],int m,int n){
    int i=m-n-1;int j=n-1;int l=m-1;
    for (int k = m+n-1; k >=0 ; --k) {
        if(i<0){
            if(j<0)break;
            arr1[l]=arr2[j];
            l--;
            j--;
            continue;
        }
        if(j<0){
            if(i<0)break;
            arr1[l]=arr1[i];
            l--;
            i--;
            continue;
        }
        if(arr1[i]>arr2[j]){
            arr1[l]=arr1[i];
            l--;
            i--;
        } else{arr1[l]=arr2[j];l--;j--;}
    }
}

int main()
{
    int arr1[6]={5,8,11};
    int arr2[3]={2,9,18};
    mergeArr(arr1,arr2,6,3);
    for (int i = 0; i < 6; ++i) {
        printf("%d ",arr1[i]);
    }
}