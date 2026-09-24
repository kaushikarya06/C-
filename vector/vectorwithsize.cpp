#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[4]<<endl;
    vector <int> v1(5,10);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    cout<<v1[4]<<endl;
}