#include<iostream>
using namespace std;
int main()
{
    int number,lastdigit,reverse=0;
    cout<<"Enter the Number : ";
    cin>>number;
    int original = number;
    while(number>0)
    {
        lastdigit = number%10;
        number = number/10;
        reverse = (reverse*10)+lastdigit;
    }
    if(original==reverse)
    {
        cout<<"Reverse = "<<reverse<<endl;
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Reverse = "<<reverse<<endl;
        cout<<"Not a Palindrome";
    }
}