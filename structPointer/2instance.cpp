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
    cout<<"****************** Printing using student instance s1 ***********************************"<<endl;
    cout<<s1.name<<endl;
    cout<<s1.roll_num<<endl;


}