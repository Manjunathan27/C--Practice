#include<iostream>
using namespace std;
int main()
{
    
    int marks;
    int attendance;
     cout<<"Enter the marks: "<<endl;
    cin>>marks;
    cout<<"Enter the Attendance: "<<endl;
    cin>>attendance;
    if(attendance>90)
    marks+=5;
    cout<<"The mark is : " <<marks; 
}