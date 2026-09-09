#include<iostream>
using namespace std;
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}

int main() 
{
	int a=5,b=7;
	cout<<a<<b<<endl;
	int* x=&a;
	int* y=&b;
	swap(x,y);
	cout<<*x<<*y;
}
