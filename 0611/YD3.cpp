#include<iostream>
using namespace std ;
int main()
{
    int age;
    cout<<"Please Enter the Person Age: ";
    cin>>age;
    if((age>=60)&&(age<=120))
    cout<<"Eligible for senior citizen discount ";
    else if ((age<0) || (age>120))
    cout<<"Kindly Enter the valid number";
    else
    cout<<"Not Eligible for senior citizen discount ";
}