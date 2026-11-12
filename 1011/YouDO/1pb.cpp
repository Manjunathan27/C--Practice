#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the Number : ";
    cin>>n;
    if(n>0)
    {
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=i+sum;
        }
    }
    cout<<sum;
}
else{
    cout<<"Invalid Input";
}
}