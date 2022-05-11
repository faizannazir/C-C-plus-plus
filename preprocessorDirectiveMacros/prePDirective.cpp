#include<iostream>
#define HELLO "Hello World"   // PreProcess Directive 

int main()
{
    std::cout<<HELLO<<std::endl;
    #undef HELLO
    
}