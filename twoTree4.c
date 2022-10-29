#include <stdbool.h>
#include "stdio.h"
#include "stdlib.h"
typedef char Element;
typedef struct Tree{
    Element data;
    struct TreeNode *left;
    struct TreeNode *right;

}*Node;
typedef struct Queue{
    Node data;
    struct Queue* rear;
    struct Queue* front;
    struct Queue* next;

}*Qnode;


init(Qnode queue){
    Qnode *temp=malloc(sizeof (struct Queue));
    queue->front=queue->rear=temp;

}

void OfferQueue(Qnode queue,Qnode data){
    Qnode temp= malloc(sizeof (struct Queue));
    temp->data=data;
    queue->rear->next;
}



//层次遍历


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