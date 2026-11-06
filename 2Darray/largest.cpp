#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,50,6,7,8,9};
    int l=arr[0][0];
    int I;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(arr[i][j]>l)
            l=arr[i][j];
        }
    }
    cout<<"largest element in 2d array is"<<endl<<l;
}