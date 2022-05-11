 #include<iostream>
#include<conio.h>
using namespace std;

class Node
{
    private:
    int val;
    Node *next = NULL;  
    public:
    Node * createHead(int val, Node *head)
    {
        Node *n;   
        n = new Node;    
        n->val = val;
        n->next = NULL;
        head = n;
        return n;
    }
    Node* currentNode(int val, Node *current)
    {
        Node *n;  
        n=new Node;     
        n->val = val;
        n->next = NULL;
        current->next= n;
        return n;
}
    void print(Node *current)
    {
        cout<<"[";
        while (current->next!=NULL)
        {
             cout<<"value = "<< current->val<<",   ";
             cout<<"next = "<< current->next<<",   "<<endl;
             current = current->next;
        }
        cout<<"value = "<<current->val<<"     next = "  << current->next <<endl;
        cout<<"]";
     }
};

int main()
{
    Node *head , *current;      
    head = NULL;
    current = head;
    for (int i = 0; i < 5; i++)
    {
     if(head == NULL)
    {
       head = current->createHead(i,current); 
       current = head;
    }
    else
    {
         current = current->currentNode(i,current);
        //  cout<<current->val<<current->next<<endl;
    }
    }
    current = head;
    current->print(current);

}