#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int count=1;count<=n;count++)
    {
        if(count%2!=0)
        {
        cout<<count<<endl;
        }
    }
}