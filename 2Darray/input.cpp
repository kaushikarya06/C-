#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter the no. rows";
    cin>>n;
    int m;
    cout<<"enter the no of columns";
    cin>>m;
    int arr[n][m];
    cout<<"enter the elements of array";
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"the entered 2d array is"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j =0; j<m ; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}