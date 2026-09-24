#include<iostream>
using namespace std;

int main() {
	int n;
    int arr[n];
	cout<<"enter the size of array";
	cin>>n;
	//arrray input
	for(int i=0 ; i<=n-1 ; i++)
	{
	    cin>>arr[i];
	}
	//find the max
	int max= arr[0];
	for(int i=0 ; i<=n-1 ; i++)
	{
	    if (max<arr[i])
	    {
	        max=arr[i];
	    }
	}
    cout<<max;
}
