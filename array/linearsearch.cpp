#include<iostream>
using namespace std;

int main() {
	int arr[5];
	for(int i=0; i<=4 ; i++)
	{
	    cin>>arr[i];
	}
	 int x;
	 cin>>x;
    for(int i=0 ; i<=4 ; i++)
    {
        if(arr[i]==x)
        cout<<i;
    }
}
