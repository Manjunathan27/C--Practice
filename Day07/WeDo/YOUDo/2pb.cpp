#include<iostream>
using namespace std;
int main()
{
    int owe, payment_limit, payment, visits = 0;
    cout<<"Balance : ";
    cin>>owe;
    cout<<"payment_limit : ";
    cin>>payment_limit;

    while(owe > 0)  
    {                    
        if(owe > payment_limit)          
            payment = payment_limit;
        else
            payment = owe;

        cout<<payment<<endl;
        owe = owe - payment;             
        visits++;                        
    }
    cout<<"Visits = "<<visits;
}