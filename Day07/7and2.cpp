#include<iostream>
using namespace std;
int main()
{
    int number,i=1;
    cout<<"Enter the Number : ";
    cin>>number;
    while(i<=number)
    {
        if((i%7!=0) && (i%2!=0))
        {
            cout<<i<<endl;
            cout<<"print completed"<<endl;
        }
        i++;
    }
}