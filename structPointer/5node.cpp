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
    node *head , *current;      // Pointer of type node 
    head = NULL;      // initialized a pointer with NULL value
    head = new node;   // create a node and return its address
    head->val = 0;
    head->next = NULL;     // Initialize Node pointer with NULL

    // current pointing head node
    current = head;
    // create new node using new keyword and assign it address to current pointer 
    current = new node; 
    // pointer next of head node is equal to current pointer(equal to address of current node)
    head->next= current;
    // assign value to current node
    current->val= 1;
    // initialize node pointer of current node with NULL
    current->next = NULL;

    cout<<"["<<head->val<<","<<current->val<<"]"<<endl;

}