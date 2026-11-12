#include<iostream>
using namespace std;
int main()

{
    int Starting_Ticket;
    cout<<"Enter the Ticket Number : ";
    cin>>Starting_Ticket;
    do{
        cout<<Starting_Ticket<<endl;
        Starting_Ticket=Starting_Ticket+2;
    }while(Starting_Ticket<=9);
}