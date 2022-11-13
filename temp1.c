#include<stdio.h>
#include "string.h"
#include "stdlib.h"

#include <stdio.h>

int main(){

    char b;
    scanf("%c",&b);
    int temp=b-96;
    for (int i = temp; i > 0; i--)
    {
        for (int j = 0; j < 2*i-1; j++)
        {
            printf(" ");
        }
        for (char k= 'a'; k <'z' ; k++) {
            putchar(k);
            if (k==b-i+1) break;
        }
        for (char f = 'a'; f < 'z'; f++) {
            if(f==b-i+1)break;
            putchar(f);

        }
        printf("\n");
        

    }


}