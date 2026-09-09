// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     int nfact=1;
//     for(int i=1 ; i<=n ; i++)
//     {
//         nfact*=i;
//     }
//     cout<<nfact<<endl;
//     int rfact=1;
//     for(int i=1 ; i<=r ; i++)
//     {
//         rfact*=i;
//     }
//     cout<<rfact<<endl;
//     int nrfact=1;
//     for(int i=1 ; i<=(n-r) ; i++)
//     {
//         nrfact*=i;
//     }
//     cout<<nrfact<<endl;
//     cout<<nfact/(rfact*nrfact);
// }
#include<iostream>
using namespace std;
int fact(int x)
{
    int fact=1;
    for(int i=1 ; i<=x ; i++)
    {
        fact*=i;
    }
    return fact;
}
int combination(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<combination(n,r);

}