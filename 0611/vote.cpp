#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if((age>=18) && (age<=120))
    {
        cout<<"Eligible to vote";
    }
    else
    {
        cout<<"Not Eligible to vote";
    }
}