#include<iostream>
using namespace std;
int main()
{
    int number,i=1;
    cout<<"Enter the  Number : ";
    cin>>number;
    while(i<=number)
    {
        if(i%5!=0)
        {
        cout<<i<<endl;
        cout<<"Print Completed"<<endl;
        }
        i++;
    }
}