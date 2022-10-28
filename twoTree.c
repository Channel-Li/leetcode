#include <stdbool.h>
#include "stdio.h"
#include "stdlib.h"
typedef char Element;



typedef struct TreeNode{
    Element data;
    struct TreeNode* left;
    struct TreeNode* right;


}*Node;

//栈
typedef struct StackNode{
    Node data;
    struct StackNode *next;
}*SNode;

void init(SNode head){
    head->next=NULL;
}

void pushStack(SNode head,Node data){
    SNode temp= malloc(sizeof (struct StackNode));
    temp->next=head->next;
    head->next=temp;
    temp->data=data;

}

Node popStack(SNode head){
    SNode temp=head->next;
    head->next=head->next->next;
    Node data=temp->data;
    free(temp);
    return data;

}

_Bool isempty(SNode head){
    return head->next==NULL;
}

//二叉树
void preOrder(Node node){
    struct StackNode head;
    init(&head);
    while (node||!isempty(&head)){
        while (node!=NULL){
            printf("%c",node->data);
            pushStack(&head,node);
            node=node->left;
        }
        Node node1= popStack(&head);
        node=node1->right;
    }
}
int main(){
    Node a = malloc(sizeof(struct TreeNode));
    Node b = malloc(sizeof(struct TreeNode));
    Node c = malloc(sizeof(struct TreeNode));
    Node d = malloc(sizeof(struct TreeNode));
    Node e = malloc(sizeof(struct TreeNode));
    Node f = malloc(sizeof(struct TreeNode));
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
    preOrder(a);
}
