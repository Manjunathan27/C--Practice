#include<iostream>
using namespace std;
int main()
{
    int lockerCode = 4827;
    int lastdigit = lockerCode%10;
    int lastq = lockerCode/10;
    int third_digit = lastq%10;
    int thirdq = lastq/10;
    int second_digit = thirdq%10;
    int secondq = thirdq/10;
    int first_digit = secondq%10;



    cout << "The addidtion of 4 numbers : " << lastdigit+third_digit+ second_digit+first_digit;
    return 0;
}