#include<iostream>
using namespace std;
int main()
{
    int seconds = 5000;
int minutes = (seconds%3600)/60;
int hours = seconds/3600;
cout<<hours<<" Hour " <<endl;
cout<<minutes<<" Minutes" <<endl;
cout<<seconds%60 <<" Seconds";
}