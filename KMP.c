#include "stdio.h"
#include "string.h"
int main(){
    char str1[]="abababcabb";
    char str2[]="ababc";
    int len1=strlen(str1);
    int len2= strlen(str2);
    int next[len2];
    next[0]=-1;
    int j=-1;
    int i=0;
    while (i<=len2){
        if(j==-1||str2[i]==str2[j]){
            next[++i]=++j;
        } else{
            j=next[j];
        }
    }
    int a=0,b=0;
    while (a<len1){
        if(str1[a]==str2[b]){
            a++;
            b++;
        } else{
            if(b==0){
                a++;
            } else{
                b=next[b];
            }

        }
        if(b==len2){
            break;
        }
    }
    printf(b==len2?"Æ¥Åä³É¹¦":"Æ¥ÅäÊ§°Ü");


}