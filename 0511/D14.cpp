#include<iostream>
using namespace std;
int main()
{
    int unit_cost = 2;
    int unit_limit = 100;
    int unit_extracost = 3;
    int total_units = 250;
    int rem_unit = total_units-unit_limit;
    int total_cost = (unit_cost*unit_limit)+(rem_unit*unit_extracost);
    cout<<"The total cost is : " << total_cost;
    return 0;
}