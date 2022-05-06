 
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


    // Struct and pointer
    // Creating pointer of type struct student
    student *s;             // Struct pointer

    // Getting address of instance of struct using & operator 
    s=&s1;                 // Getting address    // *s = s1

    cout<<endl;
    cout<<"****************** Printing using s ***********************************"<<endl;
    cout<<s->name<<endl;  // s->name = (*s).name    // . has highest periority then *
    cout<<(*s).roll_num<<endl; // same as s->rollnumber
  }  
