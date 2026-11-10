#include<iostream>
using namespace std;
int main()
{
    int number1, number2, number3;
    cout<<"Enter the numbers : ";
    cin>>number1;
    cin>>number2;
    cin>>number3;
    if(number1<number2)
    {   
        if(number2>number3)
        cout<<"number 2 is the Greatest ";
        else
        cout<<"number 3 is the Greatest ";
    }
    else
    {
        if(number1<number3)
        cout<<"number 3 is the Greatest";
        else
        cout<<"number 1 is the Greatest ";
    }
}