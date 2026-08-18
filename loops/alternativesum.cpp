#include<iostream>
using namespace std;
int  main()
{
	int i, a;
	cout<<"enter a number"<<endl;
	cin>>a;
	int sum=0;
	// for( i=1;i<=a ; i++)
	// {
	//     if (i%2!=0)
	//     {
	//    cout<<i<<endl;
	//    sum+=i;
	//     }
	//     else
	//     {
	//         cout<<"-"<<i<<endl;
	//         sum-=i;
	//     }
	// }
	// cout<<sum;
    for (i=1 ; i<=a ; i++)
    {
        if (a%2!=0)
        sum=(-a/2)+a;
        else
        sum=(-a/2);
            
    } 
    cout<<sum;
        
}

