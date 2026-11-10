#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Kindly enter the number : ";
    cin>>number;
    if((number>=-1000000) && (number<=1000000))
    {  if(number%5==0)
        cout<<"Multiple of 5";
        else
        cout<<"Not a Multiple of 5";
    }
    else
    cout<<"Kindly check the input number.. ";
}