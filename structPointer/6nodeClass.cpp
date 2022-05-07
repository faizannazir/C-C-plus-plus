#include<iostream>
#include<conio.h>
using namespace std;
 
// Solving Length problem in struct to make it like list
// node will contain its own value and a pointer
// node is like a list but of same data type
class node
{
    private:
    int val;
    node *next;  // Pointer will point next node
    public:
    node createHead(int val, node *head)
    {
        head = new node;
        head->val = val;
        head->next = NULL;
    }
    node currentNode(int val, node *current)
    {
        current = new node; 
    // pointer next of head node is equal to current pointer(equal to address of current node)
       // head->next= current;
    // assign value to current node
        current->val= 1;
    // initialize node pointer of current node with NULL
        current->next = NULL;
    }

};

int main()
{
    node *head , *current;      // Pointer of type node 
    int val;
    head->createHead(val=5,NULL);
    // head = NULL;      // initialized a pointer with NULL value
    // head = new node;   // create a node and return its address
    // head->val = 0;
    // head->next = NULL;     // Initialize Node pointer with NULL

    // // create new node using new keyword and assign it address to current pointer 
    // current = new node; 
    // // pointer next of head node is equal to current pointer(equal to address of current node)
    // head->next= current;
    // // assign value to current node
    // current->val= 1;
    // // initialize node pointer of current node with NULL
    // current->next = NULL;

    cout<<"["<<head->val<<","<<current->val<<"]"<<endl;

}