#include<iostream>
using namespace std;
int main()
{
    int startnumber,rem,rounds=0,product;
    cout<<"Enter the Number : ";
    cin>>startnumber;
    while(startnumber>9)
    {
        product=1;
        while(startnumber>0)
        {
            rem = startnumber%10;
            product = product*rem;
            startnumber=startnumber/10;
        }
        rounds++;
        startnumber = product;
    }
    cout<<product%10<<endl;
    cout<<rounds;

}