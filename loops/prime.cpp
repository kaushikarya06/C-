#include<iostream>
using namespace std;
int main() 
{
	 int a,i;
	 cout<<"enter a number";
	 cin>>a;
	 for( i=2 ; i<=a-1 ; i++)
	 {
	     if (a%i==0)
	     {
	     cout<<a<<" is a composite number."<<endl;
	     break;
	         
	     }
	 if (a%i!=0)
	 cout<<a<<" is a prime number."<<endl;
    }
    
}