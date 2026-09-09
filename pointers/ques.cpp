#include <iostream>
using namespace std;
void find(int* ptr1 , int* ptr2 , int a)
{
    *ptr2=a%10;
    while(a>9)
    {
       a/=10;
    }
    *ptr1=a;
    return;
}
int main() {
	int a ;
	cin>>a;
	int fd,ld;
	int* ptr1=&fd;
	int* ptr2=&ld;
	find(ptr1,ptr2,a);
	cout<<fd<<ld;
	
}
