/** 
 * Node lecture 2 
 *  Create a function (Take current node and value as input ) which will: 
 * 1. create a node                     
 *    node *n;    n=new node;
 * 2. assign it a value                 
 *    n->val = val; n->next = NULL
 * 3. link with current node            
 *    current-> next = n;
 * 4. return node address               
 *    return n;
 * */
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
node* currentNode(node *current,int val);

int main()
{
    node *head , *current;      // Pointer of type node 
    head = NULL;      // initialized a pointer with NULL value
    head = new node;   // create a node and return its address
    head->val = 0;
    head->next = NULL;  // Initialize Node pointer with NULL
    current = head;     // current pointing head node
cout<<"**************** Creating Node ***************************"<<endl;
for(int i=0; i<=10; i++)
{
     current = currentNode(current,i);
}
current=head;
cout<<"[";
while (current->next!=NULL)
{
    cout<<current->val<<",";
    current = current->next;

}
cout<<"]";
}
/**
 * @brief 
 *  creating node 
 * @param current 
 * @param val 
 * @return node* 
 * 1. create a new node 
 * 2. assign new node(n) passed val
 * 3. point next of new node to NULL
 * 4. assign current node  pointer to new node(n)
 */
node* currentNode(node *current,int val)
{
    node *n;    
    n=new node;
    n->val =val;
    n->next = NULL;
    
    current-> next = n;
    return n;
}