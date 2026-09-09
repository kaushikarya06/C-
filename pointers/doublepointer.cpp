#include<iostream>
using namespace std;
int main()
{
    int x;
    int* ptr=&x;
    int** p=&ptr;
    int***d=&p;
    cout<<ptr<<" "<<p<<" "<<d;
}