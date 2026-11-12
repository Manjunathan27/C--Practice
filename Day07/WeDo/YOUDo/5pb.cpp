#include<iostream>
using namespace std;
int main()
{
    int scores,currentscore=30,count=0,qualifiedsum=0;
    cout<<"Scores : ";
    cin>>scores;
    for(int i=1; i<=scores; i++)
    {

        if(currentscore>=60)
        {
            count++;
            qualifiedsum=currentscore+qualifiedsum;
            cout<<currentscore<<endl;
        }
        currentscore=currentscore+10;
    
    }
    cout<<"Qualified : "<<count<<endl;
    cout<<"Qualifying Sum : "<<qualifiedsum;
}