#include <iostream>
using namespace std;
int main()
{
    int fixedprice = 50;
    int pluscharge = 12;
    int distance = 15;
    int totalfare = fixedprice+(pluscharge*distance);
    cout<<"totalpaidfare: " << totalfare;
}