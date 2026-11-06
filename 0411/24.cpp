#include<iostream>
using namespace std;
int main()
{
    int days = 1200;
    cout<<"Years : " <<days/365<<endl;
    cout<<"Months : "<<(days%365)/30<<endl;
    cout<<"Days : "<<((days%365)%30);
}