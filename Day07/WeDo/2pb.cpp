#include<iostream>
using namespace std;
int main()
{
    int oddvalue=0,n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
        oddvalue = oddvalue + (i*i);
        }
    }
    for(int j=1;j<=n;j++)
    {
        if(j%2==0)
        {
            count++;
        }
    }
    cout<<"Odd Count : "<<oddvalue<<endl;
    cout<<"Even Count : "<<count;
}