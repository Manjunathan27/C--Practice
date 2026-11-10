#include<iostream>
int main()
{
    int first_number, second_number, sum;
    std::cout<<"Enter the two numbers to be add: " ;
    std::cin>>first_number;
    std::cin>>second_number;
    sum = first_number+second_number;
    std::cout<<"The result is : " <<sum;
}