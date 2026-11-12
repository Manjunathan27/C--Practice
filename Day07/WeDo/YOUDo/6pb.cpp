#include<iostream>
using namespace std;
int main()
{
    int upperlimit,lastdigit,firstdigit,count=0;
    int updateddigit = upperlimit;
    cout<<"Enter the number : ";
    cin>>upperlimit;
    for(int i=1;i<=upperlimit;i++)
    {
            lastdigit=i%10;
            firstdigit=i/10;
            if(lastdigit==firstdigit)
            {
                count++;
                cout<<i<<endl;
            }
    }
    cout<<"Matches = "<<count;
}