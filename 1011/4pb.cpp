#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    int psum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int count=1;count<=n;count++)
    {
        
        sum=psum+count;
        psum=sum;
    }
    cout<<sum<<endl;
}