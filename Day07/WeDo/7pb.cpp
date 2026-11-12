#include<iostream>
using namespace std;
int main()
{
    int target, firstdeposit, current = 0, count = 0, deposit;   
    cout<<"Enter the target amount : ";
    cin>>target;
    cout<<"Enter the first deposit : ";
    cin>>firstdeposit;
    deposit = firstdeposit;                                           

    do                                                                 
    {
        current = deposit+current;
        count++;
        deposit  =deposit+20;

        
    } while (current<=target);                                                

    cout<<"Weeks = "<<count<<endl;
    cout<<"Savings = "<<current;
}