#include<iostream>
#include<conio.h>
using namespace std;

// struct is hetroginity
// like  python list in data type ( hold diff data type) but not in length it cannot append 
struct student
{
    int roll_num = 0;
    string name ="";

};

int main()
{
    student s1;         // student instance
    s1.name="Ali";
    student *s;

   // creating new struct using new keyword without giving it any name 
    cout<<endl<<"************ New operator ****************** "<<endl;
    // create student with-out name 
    // new keyword will create an instance and return  its address 
    s = new student;      
    s->name ="faizan";
    s->roll_num=5157;
    cout<<s->name<<endl;  
    cout<<s->roll_num<<endl; 

    //deleting pointer s
    delete s;

  }  
