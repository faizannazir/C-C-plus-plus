#include<iostream>
#include<fstream>  // header file for file handling
using namespace std;

int main()
{    
    int s[3][3]= {{1,2,3},
                  {4,5,6},
                  {7,8,9}};
    ofstream fout;          
    fout.open("binay.bin",ios::binary);   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
               //fout<<(char *)&s<<endl; 
               fout.write((char*)&s[i][j],sizeof(int));
        }
        
    }
    
    fout.close();

    ifstream fin;
    fin.open("binary.bin",ios::binary); 
    if(fin)         // (isopen && !EOF   )  
    {
      cout<<"Error";
    }     
    else
    {
        string h;

        // // cout<<line<<endl;
        for (int i = 0; i < 3; i++)
        {
        for (int j = 0; j < 3; j++)
        {
               fin.read((char*)&s[i][j],sizeof(int));
               cout<<s[i][j];
        }
        cout<<endl;
        }
    }
    fin.close();
    

}