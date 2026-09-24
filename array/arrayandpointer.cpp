#include<iostream>
using namespace std;
int main() {
	int arr [] = {2,3,4,5,6};
	int* ptr=arr;
	for(int i=1 ; i<=5 ; i++)
	{
	    arr[3]=0;
	    cout<<*ptr;
	    ptr++;
	}

}
