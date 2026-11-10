#include<iostream>
using namespace std;
int main()
{
    int n,sum=1;
    cout<<"Enter the number : ";
    cin>>n;
    for(int count=1;count<=n;count++)
    {
        sum=sum*count;
    }
    cout<<sum;
}