#include<iostream>
using namespace std;
int main()
{
    int a_cost = 120;
    int c_cost = 60;
    int adults = 4;
    int childs = 3;
    int total = (a_cost*adults) + (c_cost*childs);
    cout<<"The Total fare is : " << total << endl;
    return 0;
}