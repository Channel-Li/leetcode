#include <time.h>
#include "stdlib.h"
#include "stdio.h"

typedef int Element;
typedef struct doubleLinkList{
    Element data;
    struct doubleLinkList* next;
    struct doubleLinkList* prev;

}*Node,DoubleLinkList;
void init(Node node){
    node->next=NULL;
    node->prev=NULL;
}
void insetdoublelist(Node head,Element data,int index){
    if(index<1)return;
    while (--index){
        head=head->next;
        if(head==NULL)return;
    }
    Node temp=malloc(sizeof (DoubleLinkList));
    if(temp==NULL)return;
    if(head->next!=NULL){
        temp->next=head->next;
        head->next->prev=temp;
    } else temp->next=NULL;

    head->next=temp;
    temp->prev=head;
    temp->data=data;



}
int main(){
    DoubleLinkList doubleLinkList;
    init(&doubleLinkList);
    srand(time(NULL));
    for (int i = 1; i <=10; ++i) {
        insetdoublelist(&doubleLinkList,rand(),i);
    }
    Node  node=&doubleLinkList;
    do {
        node=node->next;
        printf("%d ->",node->data);
    } while (node->next!=NULL);
    printf("\n");

    do {
        printf("<-%d ",node->data);
        node=node->prev;
    } while (node->prev!=NULL);

}