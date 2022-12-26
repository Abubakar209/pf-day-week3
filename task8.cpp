#include<iostream>
using namespace std;
main(){
float veg_price;
float fruit_price;
int total_kg_veg;
int total_kg_fruit;
cout<<"Vegetable price in kg ";
cin>>veg_price;

cout<<"fruit price in kg ";
cin>>fruit_price;

cout<<" total vegetable Sale in kg ";
cin>>total_kg_veg;

cout<<" total fruit Sale in kg ";
cin>>total_kg_fruit;

float veg_sale=total_kg_veg*veg_price;

float fruit_sale=total_kg_fruit*fruit_price;

float price_veg_fruit= veg_sale+fruit_sale;

float rupees= price_veg_fruit/1.94;
cout<<"Price in rupees "<<rupees;








}