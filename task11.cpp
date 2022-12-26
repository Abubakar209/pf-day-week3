#include<iostream>
using namespace std;
int main()
{
int num_a, num_b, num_c, num_d, num_e;

cout<<"Enter 1st number: ";
cin>>num_a;
cout<<"Enter 2nd number: ";
cin>>num_b;
cout<<"Enter 3rd number: ";
cin>>num_c;
cout<<"Enter 4th number: ";
cin>>num_d;
cout<<"Enter 5th number: ";
cin>>num_e;

int sum1 = num_a + num_b + num_c + num_d + num_e;

int num_6, num_7, num_8, num_9, num_10;

cout<<"Enter 6th number: ";
cin>>num_6;
cout<<"Enter 7th number: ";
cin>>num_7;
cout<<"Enter 8th number: ";
cin>>num_8;
cout<<"Enter 9th number: ";
cin>>num_9;
cout<<"Enter 10th number: ";
cin>>num_10;

int multiply = num_6 * num_7 * num_8 * num_9 * num_10;

int num_11, num_12, num_13, num_14, num_15;

cout<<"Enter 11th number: ";
cin>>num_11;
cout<<"Enter 12th number: ";
cin>>num_12;
cout<<"Enter 13th number: ";
cin>>num_13;
cout<<"Enter 14th number: ";
cin>>num_14;
cout<<"Enter 15th number: ";
cin>>num_15;

int subtract = num_11 - num_12 - num_13 - num_14 - num_15;

int result = (sum1 + multiply) - subtract;

cout<<"Result is: "<< result<<endl;




}