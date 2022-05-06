#include<iostream>
#include<conio.h>
using namespace std;

// struct is hetroginity
// like  python list in data type ( hold diff data type) but not in length it cannot append 
/**
 * @brief 
 * 
 */
struct student
{
    int roll_num = 0;
    string name ="";

};

int main()
{

    cout<<"****************** Creating instance of struct student ***********************************"<<endl;
    student s1;         // student instance
    s1.name="Ali";
    cout<<"****************** Printing using student instance s1 ***********************************"<<endl;
    cout<<s1.name<<endl;
    cout<<s1.roll_num<<endl;


    // Struct and pointer
    // Creating pointer of type struct
    student *s;             // Struct pointer

    // Getting address of instance of struct using & operator 
    s=&s1;                 // Getting address    // *s = s1

        cout<<endl;
    cout<<"****************** Printing using s ***********************************"<<endl;
    cout<<s->name<<endl;  // s->name = (*s).name    // . has highest periority then *
    cout<<(*s).roll_num<<endl; // same as s->rollnumber
    

    // creating new struct using new keyword without giving it any name 
    cout<<endl<<"************ New operator ****************** "<<endl;
    // create student with-out name 
    // new keyword will create an instance and return  its address 
    s = new student;      
    s->name ="faizan";
    s->roll_num=5157;
    cout<<s->name<<endl;  
    cout<<s->roll_num<<endl; 

    cout<<endl<<"Press any key to exit terminal"<<endl;

getch();
return 0;
}
