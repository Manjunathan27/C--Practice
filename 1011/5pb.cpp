#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,ps=0;
    cout<<"Enter the number : ";
    cin>>n;
    for(int count=1;count<=n;count++)
    {
        sum=ps+count;
        ps=sum;
    }
    cout<<"The Average of "<<n<<" number is : "<<sum/n;
}