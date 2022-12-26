#include<iostream>
using namespace std;
main(){
int bag_cost;
int bag_size_pound;
int area_sqfeet;
cout<<"enetr cost of bag";
cin>>bag_cost;
cout<<"enetr Bag size in pound ";
cin>>bag_size_pound;
cout<<"enetr area covered in squarefeet  ";
cin>>area_sqfeet;


int cost_per_pound=bag_cost/bag_size_pound;
cout<<cost_per_pound<<endl;

int result_area_sqfeet=area_sqfeet*bag_size_pound;
cout<<result_area_sqfeet<<endl;




}