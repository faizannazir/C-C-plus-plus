#include<iostream>
#include<fstream>  // header file for file handling
using namespace std;

int main()
{    
    /**
     * fout is an object of ofstream
     * if file doesnot exist create it
     * open in write mode by default 
     */
    ofstream fout;          //ofstream o (for output) f ( for file )
    fout.open("hello.txt");   // By default file open in write mode(truncaate content (override content)) 
    fout<<" Hello World! "<<endl; // override existing data of file
    fout.close();
    // after this line hello.txt content is Hello World!


    /**
     * Overriding:
     *  when file is open 2nd time as a write mode it will override old content
     */
    ofstream fout1;         
    fout1.open("hello.txt");   
    fout1<<" Good Bye! "<<endl; 
    fout1.close();
    // after this line hello.txt content is Good Bye!
}