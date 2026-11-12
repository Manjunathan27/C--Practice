#include<iostream>
using namespace std;
int main()
{
    int startingattempt;
    cout<<"Starting attempt = ";
    cin>>startingattempt;
    do
    {
        cout<<startingattempt<<endl;
        startingattempt++;
    }while(startingattempt<5);
}