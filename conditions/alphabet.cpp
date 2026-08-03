#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character";
    cin>>ch;
    int ascll=int(ch);
    if(ascll>=97 && ascll<=122)
    {
        cout<<"lower case alphabet";
    }
    else if (ascll>=65 && ascll<=90)
    {
        cout<<"upper case alphabet";
    }

    else
    {
        cout<<"not alphabet";
    }
}