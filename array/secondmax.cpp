#include<iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,48,6};
	int max;
	int smax;
	max=arr[0];
	for(int i=0 ; i<=4 ; i++)
	{
	    if(max<arr[i])
	    max=arr[i];
	}
	cout<<max<<endl;
	for(int i=0 ; i<=4 ; i++)
	{
	    if((max>arr[i]) && (max!=arr[i]))
	    smax=arr[i];
	}
	cout<<smax;

}
