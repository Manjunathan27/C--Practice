#include <iostream>
using namespace std;
int main()
{
    int code = 7531;
    int sum = (code%10) + (code/10)%10 + (code/100)%10 + (code/1000)%10;
    cout<<"The sum of 4 digits : " << sum;
    return 0;
}