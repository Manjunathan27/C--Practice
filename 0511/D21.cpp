#include<iostream>
using namespace std;
int main()
{
    int year = 2024;
    if ((year%4==0 && year%100!=0)  || (year%400==0))
    {
        cout<<"The year is Leap year";
    } 
    else
    {
        cout<<"The year is not Leap year";
    }
    return 0;
}