#include<iostream>
using namespace std;
int main()
{
    int a=122;
    int* b=&a;
    cout<<a<<endl;
    *b=200;
    cout<<a;
}