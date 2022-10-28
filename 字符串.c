#include "stdio.h"
#include "string.h"
int main(){
char arr1[64],arr2[64];
    gets(arr1);
    gets(arr2);
     unsigned int len1=strlen(arr1);
     unsigned int len2= strlen(arr2);
     _Bool flag=0;
    for (int i = 0; i < len1; ++i){
        flag=0;
        for (int j = 0; j < len2; ++j) {
            if(arr1[i+j]!=arr2[j]){
                flag=1;
                break;
            }
        }
        if(!flag)break;
    }
    puts(flag?"²»Æ¥Åä":"Æ¥Åä");
}