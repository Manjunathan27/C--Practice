#include<iostream>
using namespace std;
int main()
{
    int guest, Badge=0;
    cout<<"Enter the guest count : ";
    cin>>guest;
    for(int i=1; i<=guest;i++)
    {
        cout<<i<<endl;
        Badge=i;
    }
    cout<<"Badges = "<<Badge;
}