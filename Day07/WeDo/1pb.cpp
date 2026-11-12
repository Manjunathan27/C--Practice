#include<iostream>
using namespace std;
int main()
{
    int i=1,number,sum=0;
    cout<<"Enter the Number : ";
    cin>>number;
    while(i<((number+1)*4))
    {
        if(i%4==0)
        {
            cout<<i<<endl;
            sum=i+sum;
        }
        i++;
    }
    cout<<"Total = "<<sum<<endl;
}