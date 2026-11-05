#include <iostream>
using namespace std;
int main()
{
    int litre= 15;
    int totalminute = 8;
    int Leakage = 20;
    int finalout = (litre*totalminute)-Leakage;
    cout<<"Remaining Litres : " << finalout; 
}