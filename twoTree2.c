#include "stdio.h"
#include "stdlib.h"
typedef char Element;
typedef struct Tree{
    Element data;
    struct Tree *right;
    struct Tree *left;

}*Node;
//中序遍历用递归实现

void inOrder(Node root){
    if (root ==NULL)return;
    inOrder(root->left);
    printf("%c",root->data);
    inOrder(root->right);
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