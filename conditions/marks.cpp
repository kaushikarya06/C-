#include<iostream>
using namespace std;
int main()
{
int marks;
cout << "enter marks";
cin >> marks;
        if (marks >= 91)
        {
            cout << "excellent";
        }
        else
        {
            if (marks >= 81)
            {
                cout << "very good";
            }
            else
            {
                if (marks >= 71)
                {
                    cout << "good";
                }
                else
                {
                    if (marks >= 61)
                    {
                        cout << "average";
                    }
                    else
                    {
                        if (marks >= 51)
                        {
                            cout << "below average";
                        }
                        else
                        {
                            cout << "fail";
                        }
                    }
                }
            }
        }
    }
