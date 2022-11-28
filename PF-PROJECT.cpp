#include<iostream>                                       
#include<string.h>                                    
using namespace std;                                  
int main()
{                                                 
	int a;                                        // a for chosing option 1 to 6
  int b,k,B,K;                                           // Use for Account no
	int c=0,l=0,d=0,n=0;                        // c & l for deposing ammount // d and n for withdraw                                           
	int i,j,m,q,p;                          // i for create account s or c // j for deposit in s or c acc//m for withdraw from s or c// q for account info//p for deleting s or c acc                     
	int e,f,h,o;                             // for account no                                      
	int r,s,t,u;                              // r , s,t,u for creating pin
	int v,w;                                      // p & w for pin in withdraw
    int sum=0,sum2,sum3=0,sum5;                // sums for sum formula and showing account amount
	char A[50],C[50];
		system("color fc");
	cout<<" PROGRAM      :   BSCS                     "<<endl;
	cout<<" SEMESTER     :   1                        "<<endl;
	cout<<" SECTION      :   A                        "<<endl;
    cout<<" PROJECT      :   BANK MANAGEMENT SYSTEM   "<<endl;
	cout<<" SUBJECT      :   PROGRAMING FUNDAMENTAL   "<<endl;
	cout<<" TEACHER NAME :   MS.TAYYABA KALSOOM       "<<endl;
	cout<<"Name:   \t\t FAIZAN NAZIR"<<endl;
  cout<<"Arid No: \t\t 19-Arid-5157 "<<endl;
	system("PAUSE");
	system("cls");
	for(int z=0;z<=100;z++)
{

	 for(z=100;z>=0;z--)
{	 	if(a==6)                                  // if condition for exiting from program 
	{
	break;}
    system("COLOR fa");
cout<<"\t\t\t"<<"    *********************************************************************       "<<endl;
cout<<"\t\t\t"<<"    *           *  BANK MANAGEMENT SYSTEM  *                            *       "<<endl;
cout<<"\t\t\t"<<"    *********************************************************************       "<<endl;
cout<<"\t\t\t"<<"############################################################################    "<<endl;	
cout<<"\t\t\t"<<"#      *                1.     CREATE ACCOUNT                              #    "<<endl;
cout<<"\t\t\t"<<"#      **               2.      DEPOSIT MONEY                              #    "<<endl;
cout<<"\t\t\t"<<"#       ***             3.       WITHDRAW MONEY                            #    "<<endl;
cout<<"\t\t\t"<<"#         ****          4.       ACCOUNT INFORMATION                       #    "<<endl;
cout<<"\t\t\t"<<"#           *****       5.        DELETE ACCOUNT                           #    "<<endl;
cout<<"\t\t\t"<<"#              ******   6.           EXIT                                  #    "<<endl; 
cout<<"\t\t\t"<<"############################################################################    "<<endl;
cout<<endl<<endl;
cout<<"ENTER YOUR CHOICE "<<endl;
	cin>>a;

switch(a)
{
case 1:
	
  cout<<"*******************CREATE NEW ACCOUNT********************"<<endl<<endl;
  cout<<" 1.   SAVING ACCOUNT  "<<" 2.   CURRENT ACCOUNT"<<endl;
  cin>>i;
  if(i==1)
  {cout<<"********SAVING ACCOUNT******** "<<endl;
   cout<<"ENTER ACCOUNT NO"<<endl;
  cin>>b;
  cout<<"ENTER NAME"<<endl;
  cin.ignore();
  cin.getline(A,50);                                               // use array for entering full name
  cout<<"CREATE YOUR  DIGITS PIN "<<endl;
  cin>>r;
  cout<<"RE ENTER YOUR PIN "<<endl;
  cin>>s;
  if(r==s)
  {cout<<endl<<" ACCOUNT SUCESSFULLY CREATED"<<endl<<endl<<endl;
  cout<<"******THANK YOU ***********"<<endl;}
  else
  cout<<"SORRY YOUR ACCOUNT DIDNOT CREATED RETRY "<<endl;}
  if(i==2)
 { cout<<"**********CURRENT ACCOUNT******** "<<endl;
  cout<<"ENTER ACCOUNT NO"<<endl;
  cin>>k;
  cout<<"ENTER NAME"<<endl;
  cin.ignore();
  cin.getline(C,50);                                                  // use array for entering full name
    cout<<"CREATE YOUR  DIGITS PIN "<<endl;
  cin>>t;
  cout<<"RE ENTER YOUR PIN "<<endl;
  cin>>u;
  if(t==u)
  {cout<<endl<<" ACCOUNT SUCESSFULLY CREATED"<<endl<<endl<<endl;
  cout<<"******THANK YOU ***********"<<endl;}
  else
  cout<<"SORRY YOUR ACCOUNT DIDNOT CREATED RETRY "<<endl;}
  break;
case 2:
cout<<"*************DEPOSIT MONEY*****************"<<endl;
cout<<endl;

cout<<" 1.   SAVING ACCOUNT  "<<" 2. CURRENT ACCOUNT"<<endl;
cin>>j;
if(j==1)
  {cout<<"*******SAVING ACCOUNT******** "<<endl;
  cout<<"ENTER ACCOUNT NO"<<endl;
cin>>B;
cout<<"ENTER AMMOUNT"<<endl;
cin>>c;                                                          
if(B==b)
 {sum=sum+c;                                                                   // sum formula for Adding & updating account amount
 cout<<" SUCCESFULLY DEPOSIT "<<" TO "<<A<<endl;
 cout<<"YOUR ACCOUNT  NEW BALANCE IS "<<sum<<endl;break;}                  // displaying account amount
  else
{cout<<"NO ACCOUNT HOLDER FOUND"<<endl;
break;}}
  if(j==2)
  {cout<<"**********CURRENT ACCOUNT******** "<<endl;
cout<<"ENTER ACCOUNT NO"<<endl;
cin>>K;
cout<<"ENTER AMMOUNT"<<endl;
cin>>l;
if(K==k)
 {sum3=sum3+l;                                                       // sum formula for adding & updating  Account amount
 cout<<" SUCCESFULLY DEPOSIT "<<" TO "<<C<<endl;
 cout<<"YOU ACCOUNT  NEW BALANCE IS "<<sum3<<endl;}                         // displaying account amount
  else
{cout<<"NO ACCOUNT HOLDER FOUND"<<endl;
}}break;
case 3:
cout<<"**************WITHDRAW MONEY***************"<<endl<<endl;
cout<<"1.SAVING ACCOUNT "<<" 2. CURRENT ACCOUNT "<<endl;
 cin>>m;
if(m==1)
{cout<<"ENTER ACCOUNT NO"<<endl;
cin>>h;
cout<<"ENTER YOUR PIN "<<endl;
cin>>v;
if(h==b&&v==r)                                              // matching account no and pin use && run if both match
{cout<<"ENTER AMOUNT ";
cin>>d;}
else
{cout<<"NO ACCOUNT"<<endl;  break;}
if(d<=sum)
{cout<<"SUCESFULLY RS "<<d<<" WITHDRAWED"<<endl;
sum2=sum-d;                                                              // Sum formula for updating account amount after withdraw
cout<<"YOUR REMANING BALANCE IS "<<sum2<<endl;                           // showing remaining balance
cout<<"THANKS"<<endl;
sum2=sum-d;
sum=sum2;}                                                               // Updating Sum value with sum2
else
{cout<<"INSUFICIENT BALANCE"<<endl;}}
if(m==2)
{cout<<"ENTER ACCOUNT NO"<<endl;
cin>>o;
cout<<"ENTER YOUR PIN "<<endl;
cin>>w;
if(o==k&&w==t)                                                       // matching account no and pin use && run if both match
{cout<<" ENTER AMOUNT ";
cin>>n;}
else
{cout<<"NO ACCOUNT or YOUR ENTER FALSE PIN "<<endl; break;}
if(n<=sum3)
{cout<<"SUCESFULLY RS "<<n<<" WITHDRAWED"<<endl;
sum5=sum3-n;                                                               // Sum formula for updating account amount after withdraw
cout<<"YOUR REMANING BALANCE IS "<<sum5<<endl;                               // showing remaining balance
cout<<"THANKS"<<endl;
sum5=sum3-n;
sum3=sum5;}                                                               // Updating Sum3  value with Sum5
else
{cout<<"INSUFICIENT BALANCE"<<endl;}}
break;
case 4:
cout<<"************ACCOUNT INFORMATION*************"<<endl<<endl;
cout<<"1.SAVING ACCOUNT "<<" 2. CURRENT ACCOUNT "<<endl;
cin>>q;
if(q==1)
{cout<<"ENTER ACCOUNT NO "<<endl;
cin>>e;
if(b==e)
{
	sum2=sum;                                                                    // Again  updating sum2 with sum    
cout<<"ACCOUNT HOLDER NAME IS "<<A<<" ACCOUNT BALANCE IS "<<sum2<<endl;
}
else
{cout<<" NO ACCOUNT "<<endl;}}
if(q==2)
{cout<<"ENTER ACCOUNT NO "<<endl;
cin>>f;
if(k==e)
{sum5=sum3;                                             // Again updating Sum5 with Sum3
cout<<"ACCOUNT HOLDER NAME IS "<<C<<" ACCOUNT BALANCE IS "<<sum5<<endl;
}
else
{cout<<" NO ACCOUNT "<<endl;}}
break;
case 5:
cout<<"*************DELETE ACCOUNT******************"<<endl<<endl;
cout<<" 1. SAVING  "<<"2. CURRENT "<<endl;
cin>>p;
if(p==1)
{cout<<"ENTER ACCOUNT NUMBER"<<endl;
cin>>f;
if(f==b)
{
cout<<A<<" ACCOUNT SUCESSFULY DELETED "<<endl;
b=0;}                                              // Put b=0 for deleting account   // b is Saving  account number
else
{cout<<"ACCOUNT NUMBER IS FALSE"<<endl;}}                                        
if(p==2)
{cout<<"ENTER ACCOUNT NUMBER"<<endl;
cin>>f;
if(f==k)
{cout<<C<<" ACCOUNT SUCESSFULY DELETED "<<endl;
k=0;}                                                // Put k=0 for deleting account   // K is current account number
else
{cout<<" YOU ENTERED FALSE ACCOUNT NO "<<endl;}}
break;
case 6:
	cout<<"*******EXIT**********"<<endl<<"***** THANKS ***** "<<endl;
	break;
default:
cout<<"YOU ENTERED INCORRECT CHOICE"<<endl;
cout<<" PLEASE ENTER CHOICE BETWEEN 1 TO 6 "<<endl;
break;}
cout<<endl;
}
}
}  // THE END 
	//THANK YOU VERY MUCH
	
