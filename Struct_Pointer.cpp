#include<iostream>
using namespace std;
struct student
{
    int roll_num = 0;
    string name ="";

};

int main()
{
    student s1;
    s1.name="Ali";
    student *s;
    s=&s1;
    cout<<s->name<<endl;  // s->name = (*s).name
    cout<<(*s).roll_num<<endl;

}