#include <iostream>
using namespace std;
int main()
{
    int fixed_rupee = 100;
    int extra_fee = 40;
    int time =3;
    cout<<"The total fare is : " << fixed_rupee+(extra_fee*time);
    return 0;
}