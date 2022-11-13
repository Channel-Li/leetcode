#include "stdlib.h"

#define SIZE 9

typedef struct ListNode{
    int key;
    struct ListNode *next;
}*Node;

typedef struct HashTable{
    Node table;
}*HashTable;

void init( HashTable hashTable){
    hashTable->table= malloc(sizeof (struct ListNode)*SIZE);
    for (int i = 0; i < SIZE; ++i) {
        hashTable->table[i].key=-1;
        hashTable->table[i].next=NULL;
    }

}

int hash(int key){
    return key%SIZE;

}

void insert(HashTable hashTable,int key){
    int hashcode= hash(key);
    Node node=&hashTable->table[hashcode];
    while ()
}