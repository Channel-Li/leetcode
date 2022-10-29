#include <stdbool.h>
#include "stdio.h"
#include "stdlib.h"
typedef char Element;

typedef struct Tree TreenodeData;

typedef struct Tree{
    Element data;
    struct Tree *right;
    struct Tree *left;

}*Node;
//中序遍历用栈实现

typedef struct Tstack{
    TreenodeData* data2;
    struct Tstack *next;

}*Snode;

void inti(Snode head){
    head->next=NULL;

}

void PushStack(Snode head,TreenodeData* data){
   Snode  temp=malloc(sizeof (struct Tstack));
   if (temp==NULL )return;
   temp->next=head->next;
   head->next=temp;
   temp->data2=data;

}
TreenodeData* PopStack(Snode head){
    Snode temp=head->next;
    head->next=head->next->next;
    Node data=temp->data2;
    free(temp);
    return data;
}
bool is_empty(Snode head){
    return head->next==NULL;
}



void inOrder(Node root){
    struct Tstack head;
    inti(&head);
    while (root||!is_empty(&head)){
        while (root){
            PushStack(&head,root);
            root=root->left;


        }
        Node temp=PopStack(&head);
        printf("%c ",temp->data);
        root=temp->right;
    }
}



void main(){
    Node a = malloc(sizeof(struct Tree));
    Node b = malloc(sizeof(struct Tree));
    Node c = malloc(sizeof(struct Tree));
    Node d = malloc(sizeof(struct Tree));
    Node e = malloc(sizeof(struct Tree));
    Node f = malloc(sizeof(struct Tree));
    a->data = 'A';
    b->data = 'B';
    c->data = 'C';
    d->data = 'D';
    e->data = 'E';
    f->data = 'F';

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    c->left = NULL;
    d->left =d->right = NULL;
    e->left = e->right = NULL;
    f->left = f->right = NULL;
    inOrder(a);
}