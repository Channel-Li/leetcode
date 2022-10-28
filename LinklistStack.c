#include "stdio.h"
#include "stdlib.h"
typedef int Element;


typedef struct LinklistStack{
    struct LinklistStack* next;
    Element data;

}*Node,Lstack;
void init(Node node){
    node->next=NULL;
}
void insetStack(Node head,Element data){
    Node temp=malloc(sizeof (Lstack));
    if(temp==NULL)return;
    temp->data=data;
    temp->next=head->next;
    head->next=temp;

}

int main(){
    Lstack lstack;
    init(&lstack);

}