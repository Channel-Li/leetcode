#include <stdbool.h>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
typedef int Element;
typedef struct Linklist{
    Element data;
    struct Linklist *next;
}*Node,Linknode;

void init(Node node){
    node->next=NULL;
}
bool inserlist(Node head,Element data,int index){
    if(index<1)return 0;
    while (--index){
        head=head->next;
        if(head==NULL)return 0;


    }
    Node  node=malloc(sizeof (Linknode));
    if(node==NULL)return 0;
    node->data=data;
    node->next=head->next;
    head->next=node;
    return 1;

}
void deleteList(Node head,int index){
    if(index<1)return;
    for (int i = 1; i < index; ++i) {
        head=head->next;
        if(head==NULL)return;
    }
    if(head->next==NULL)return;
    Node temp=head->next;
    head->next=temp->next;
    free(temp);



}
void printList(Node head){
    while (head->next){
        head=head->next;
        printf("%d",head->data);
        printf(" ");
    }

}
int main(){
    Linknode  linknode;
    init(&linknode);
    srand(time(NULL));
    for (int i = 1; i <5 ; ++i) {
        inserlist(&linknode,rand()%100,i);
    }
    printList(&linknode);
    deleteList(&linknode,2);
    printf("\n");
    printList(&linknode);


}