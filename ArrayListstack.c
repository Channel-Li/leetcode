#include "stdio.h"
#include "stdlib.h"
typedef int Element;
typedef struct stack{
    int capacity;
    int top;
    Element *arr;
}*Stack,sta;
//初始化
void init(Stack stack){
    stack->arr= malloc(sizeof (Element)*10);
    if(stack->arr==NULL)return;
    stack->capacity=10;
    stack->top=-1;
}
void pushstack(Stack stack,Element data){
    if(stack->top+1==stack->capacity){
        int newsize=stack->capacity+(stack->capacity>>1);
        Element *newarr=realloc(stack->arr,newsize*sizeof(Element));
        if(newarr==NULL)return;
        stack->arr=newarr;
        stack->capacity=newsize;

    }
    stack->top++;
    stack->arr[stack->top]=data;


}
void printStack(Stack stack){
    for (int i = 0; i <stack->top+1 ; ++i) {
        printf("%d, ",stack->arr[i]);

    }
    printf("\n");

}
Element popstack(Stack stack){
    return stack->arr[stack->top--];
}
int main(){
    sta sta1;
    init(&sta1);
    for (int i = 0; i < 3; ++i) {
        pushstack(&sta1,i*10);
    }
    printStack(&sta1);



}