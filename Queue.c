#include "stdlib.h"
#include "stdio.h"

typedef int Element;
typedef struct queue{
    Element * arr;
    int capacity;
    int front,rear;
}*ArrayQueue;

void init(ArrayQueue arrayQueue){
    arrayQueue->arr= malloc(sizeof (Element)*10);
    if(arrayQueue->arr==NULL)return;
    arrayQueue->capacity=10;
    arrayQueue->front=arrayQueue->rear=0;

}

void offerQueue(ArrayQueue arrayQueue,Element data){
    if((arrayQueue->rear+1)%arrayQueue->capacity==arrayQueue->front){
        return;
    }
    arrayQueue->rear=(arrayQueue->rear+1)%arrayQueue->capacity;
    arrayQueue->arr[arrayQueue->rear]=data;


}
void printQueue(ArrayQueue arrayQueue){
    int i=arrayQueue->front;
    do {
        i=(i+1)%arrayQueue->capacity;
        printf("%d, ",arrayQueue->arr[i]);
    } while (i!=arrayQueue->rear);

}
int main(){
    struct queue queue;
    init(&queue);
    for (int i = 0; i < 5; ++i) {
        offerQueue(&queue,i*10);
    }
    printQueue(&queue);


}