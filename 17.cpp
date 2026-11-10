#include<iostream>
using namespace std;

int main()
{
    int students = 1250; 
    int bus = 45;
     int total_bus = students/bus;
     int left = students%bus;
     cout<<"The Total Bus required : " << total_bus<<endl;
     cout<<"the left students : " << left; 
}