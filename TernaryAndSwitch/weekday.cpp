#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    switch (n){
    case 1:
    cout<<"monday";
    break;
    case 2:
    cout<<"tuesday";
    break;
    case 3:
    cout<<"wed";
    break;
    case 4:
    cout<<"thus";
    break;
    case 5:
    cout<<"fri";
    break;
    case 6:
    cout<<"sat";
    break;
    case 7:
    cout<<"sun";
    break;
    default:
    cout<<"invalid";
    }
}
