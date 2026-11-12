#include<iostream>
using namespace std;
int main()
{
    int minutes,seconds;
    cout<<"Enter the Minute : ";
    cin>>minutes;
    cout<<"Enter the seconds: ";
    cin>>seconds;
    for(int i=minutes; i<60;i++)
    {
        for(int j=seconds;j<60;j++)
        {
            if(j==59)
            {
                
            }
            cout<<i <<" : " <<j<<endl;
        }
    }
}