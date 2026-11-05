#include <iostream>
using namespace std;
int main()
{
    int fixed_rupee=50;
    int extra_fee=12;
    int trip_distance=15;
int fare = fixed_rupee+(extra_fee*trip_distance);
cout<<"The total fare is : " << fare;
return 0;
}