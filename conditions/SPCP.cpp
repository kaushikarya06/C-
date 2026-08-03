#include<iostream>
using namespace std;
int main()
{
    int sp , cp;
    cout<<"enter the value of sp and cp";
    cin>>sp>>cp;
    if(sp>cp)
    {
        cout<<"profit";
       int profit=sp-cp;
       cout<<"profit is"<<profit;
    }
    else
    {
        cout<<"loss";
        int loss=cp-sp;
        cout<<"loss is"<<loss;
    }
    return 0;
}