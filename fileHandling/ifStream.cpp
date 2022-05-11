#include<iostream>
#include<fstream>  // header file for file handling
using namespace std;

int main()
{    
    string line;
    /**
     * fin is an object of ifstream
     * if file doesnot exist create it
     * open in write mode by default 
     */
    ifstream fin;          //ifstream o (for input) f ( for file )
    fin.open("hello.txt");   // By default file open in write mode(truncaate content (override content)) 

    /**
     * this if condition check if file is opened (file exist and permission to open file) 
     * if yes then return true
     * **/
    if(fin)                 //(isopen)
    {
        getline(fin,line);  //getline function take 2 parameters [ 1. ifstream  2. variable to store data ] 

    }
    fin.close();
    cout<<line<<endl;

    /**
     *  this while condition check if file is opened (file exist and permission to open file) like if condition 
     * but it also check 1 more condition is it end of file(EOF) or not if not 
     *  then return true
     *  If EOF then return false
     **/
    fin.open("hello.txt"); 
    while(fin)         // (isopen && !EOF   )       
    {
        getline(fin,line);  //getline function take 2 parameters [ 1. ifstream  2. variable to store data ] 
        cout<<line<<endl;
    }
    fin.close();
    

}