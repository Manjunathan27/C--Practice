#include<iostream>
using namespace std;
int main()
{
    int first_number, second_number;
    cout<<"Enter the two numbers to compare : ";
    cin>>first_number;
    cin>>second_number;
    if(first_number>second_number)
    cout<<"Smallest = "<<second_number;
    else if(first_number==second_number)
    cout<<"Smallest = "<<second_number;
    else
    cout<<"Smallest = " <<first_number;
}