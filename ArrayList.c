#include <stdio.h>
#include "stdlib.h"
typedef int Element;
typedef struct List{
    Element * array;
    int capacity;
    int size;
}*ArrayList,aList;

//初始化
_Bool initList(ArrayList list){
    list->capacity=10;
    list->array= malloc(sizeof (Element)*list->capacity);
    if(list->array==NULL)return 0;
    list->size=0;
    return 1;
}
_Bool  insertList(ArrayList list ,Element data,int index){
    if(index<0||index>list->size+1){
        return 0;
    }
    if(list->size==list->capacity){
        int newcapacity=list->capacity+(list->capacity>>1);
        Element * newarray =realloc(list->array,newcapacity*sizeof (Element));
        if(newarray==NULL)return 0;
        list->array=newarray;
        list->capacity=newcapacity;

    }

    for (int i = list->size; i > index; --i) {
        list->array[i]=list->array[i-1];

    }
    list->array[index]=data;
    list->size++;
    return 1;
}
//删除操作
void deleteList(ArrayList list,int index){
    if(index<0||index>=list->size){
        return;
    }
    for (int i = index; i <list->size ; ++i) {
        list->array[i]=list->array[i+1];
    }
    list->size--;

}
void printList(ArrayList list){
    for (int i = 0; i < list->size; ++i) {
        printf("%d ",list->array[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    aList list;
    if(initList(&list)){  //传递地址才可以创建
        for (int i = 0; i < 130; ++i) {
            insertList(&list,i*10,i);
        }
        deleteList(&list,5);
        deleteList(&list,5);
        printList(&list);
        printf("%d",list.capacity);

    } else{ printf("初始化失败");}
    return 0;
}

