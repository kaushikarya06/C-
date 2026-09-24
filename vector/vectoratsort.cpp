#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(1);
    v.push_back(2);
    v.at(1)=4;
    cout<<v.at(1)<<endl;
    for (int i=0 ; i<v.size();i++)
    {
        cout<<v.at(i);
    }
    cout<<endl;
    //sort
    sort(v.begin(),v.end());
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v.at(i);
    }
    

}
