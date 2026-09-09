#include <iostream>
using namespace std;
int main()
{
// int x=7;
// int* ptr=&x;//0x61ff08
// cout<<ptr<<endl;
// ptr=ptr+1;
// cout<<ptr;//0x61ff0c(4 byts jump)
// }
// //0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f

int x=7;
int*ptr=&x;
cout<<*ptr<<endl;
(*ptr)++;
cout<<*ptr;
}