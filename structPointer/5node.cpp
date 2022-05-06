#include<iostream>
#include<conio.h>
using namespace std;

// Solving Length problem in struct to make it like list
// node will contain its own value and a pointer
// node is like a list but of same data type
struct node
{
    int val;
    node *next;  // Pointer will point next node 

};

int main()
{
    node *head;      // Pointer of type node 
    head = NULL;      // initialized a pointer with NULL value
    head = new node;   // create a node and return its address
    head->val = 0;
    head->next = NULL;

}