#include<iostream>
using namespace std;
int main()
{
    int tot_amount = 4860;
    int five_hundred =  tot_amount/500;
    int rem_amnt = tot_amount - (five_hundred*500);
    int hundred= rem_amnt/100;
     rem_amnt = rem_amnt - (hundred*100);
    int fifties = rem_amnt/50;
    rem_amnt = rem_amnt - (fifties*50);
    int tens = rem_amnt/10;
    rem_amnt = rem_amnt - (tens*10);

    cout<<" The 500 notes : " << five_hundred << endl;
    cout<<" The 100 notes : " << hundred << endl;
    cout<<" The 50 notes : " << fifties << endl;
    cout<<" The 10 notes : " << tens ;

}