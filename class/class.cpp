#include<iostream>
using namespace std;

class Num       // class declaration
{
    int a;  // By default data is private cannot use outside of class
    int b;
public:
Num()       // default constructor special type of method same name as class and does not have a return type
{
    a=0;
    b=0;
    cout<<" Default Constructor called "<<endl;
}
Num(int a,int b)       // Parameterised constructor 
{
    Num::a = a;
    Num::b = b;
cout<<" Parameterized Constructor called "<<endl;

}


};
int main()
{ 
    //creating objeects
    Num a(5,6); // Parameterized constructor will be Called
    Num b;   // Default constructor called
    
}