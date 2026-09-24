#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(5);//1 1
v.push_back(40); //2 2
v.push_back(950);//3 4
v.push_back(9);// 4 4
v.push_back(4);//5 8
v.push_back(6);//6 8
v.push_back(6);//7 8
v.push_back(7);//8 8
v.push_back(2);//9 16
v.push_back(1);//10 16
v.push_back(3);//11 16
v.push_back(6);//12 16
v.push_back(8);//13 16
v.push_back(3);//14 16
v.push_back(5);//15 16
v.push_back(6);//16 16
v.push_back(6);//17 32
cout<<"size is "<<v.size()<<endl;
cout<<"capacity is "<<v.capacity()<<endl;
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
cout<<"size is "<<v.size()<<endl;
cout<<"capacity is "<<v.capacity()<<endl;
}
