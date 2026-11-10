#include <iostream>
using namespace std;
int main()
{
    // int fixed_rupee = 100;
    // int extra_fee = 40;
    // int time =3;

    int fixed_rupee, extra_fee, time;
    cout<<"The fixed_rupee is : " <<endl;
    cin>>fixed_rupee;
    cout<<"The extra_fee is : " <<endl;
    cin>>extra_fee;
    cout<<"The time is : " <<endl;
    cin>>time;

    cout<<"The total fare is : " << fixed_rupee+(extra_fee*time);
    return 0;
}