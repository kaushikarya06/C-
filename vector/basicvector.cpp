#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;//no need to mention size of vector
    //input/inserting
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    //accessing elements
    cout<<v[0];
    cout<<v[1];
    cout<<v[2];
    cout<<v[3];
    
}