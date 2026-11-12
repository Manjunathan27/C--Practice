#include<iostream>
using namespace std;
int main()
{
    int hours=0,target, population;

    cin>>population;
    cin>>target;
    
    while(population<target)
    {
        population=population*2;
        hours++;
        
    }
    cout<<"Hours = "<<hours<<endl;
    cout<<"Cells = "<<population;

}