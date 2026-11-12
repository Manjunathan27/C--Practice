#include<iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter the row : ";
    cin>>row;
    cout<<"Enter the Column : ";
    cin>>column;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
}