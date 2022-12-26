#include<iostream>
using namespace std;
main(){


int velocity;
int accerlation ; 
int time;
cout<<"Enter Intial velocity ";
cin>>velocity;
cout<<"Enter Accelration ";
cin>>accerlation;
cout<<"Enter time ";
cin>>time;

int final_velocity=(accerlation*time)+(velocity);

cout<<final_velocity;

}