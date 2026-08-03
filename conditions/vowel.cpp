#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter char";
	cin>>ch;
	int ascii=(int)ch;
	if ((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122))
	{
	    if (ch=='a'  || ch=='e'  ||  ch=='i'  ||  ch=='o'  ||  ch=='u')
	    {
	        cout<<"is vowel";
	    }
	    else
	    {
	        cout<<"is constant";
	    }
	}
	else
	{
	    cout<<"is not alphabet";
	}

}
