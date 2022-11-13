#include<stdio.h>

void fun(int a,int b){
    int temp =a;
    if (temp=0)
    {
        return;
    }

    for (int i = 1; i <= temp; i++)
    {
        printf("%d*%d ",temp,i);
    }
    printf("\n");
    fun(temp-1,b);



}

int main(){
fun(9,1);
}