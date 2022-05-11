#include<iostream>
using namespace std;
//Creating switch 
#define HELLO         // if this line not exist ifdef will not exicuted
#ifdef HELLO      //run if #define HELLO
void inv()
{
    cout<<"Hello world"<<endl;
}
#endif
#ifndef HELLO     // run if  #define HELLO not exist
void bye()
{
cout<<"Good Bye"<<endl;
}
#endif


int main()
{
   //run if #define HELLO
    #ifdef HELLO          // check if it is defined then 
    inv();               // run this function
    #endif
     //run if not #define HELLO
    #ifndef HELLO
      bye();

    #endif

}

