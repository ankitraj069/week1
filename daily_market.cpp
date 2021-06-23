#include<iostream>
using namespace std;

int main(){
	
	int month=0,year=0;
	float cost[5]={},monthly=0.0f,daily=0.0f;
	
	for(int i=0;i<5;i++)
		cin>>cost[i];
	cin>>month>>year;
	if((month<1||month>12) || year<0){
		cout<<"Error";
		return 0;
	}
	
	for(int i=0;i<5;i++){
		if(cost[1]<cost[i]){
			cout<<"Error";
			return 0;
		}
	}
	
	for(int i=0;i<5;i++){
		daily+=cost[i];
	}
	
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		monthly=daily*31.0f;
	
	if(month==4||month==6||month==9||month==11)
		monthly=daily*30.0f;
		
	if(month==2){
		if(year%400==0 || (year%100!=0 && year%4==0))
			monthly=daily*29.0f;
		else
			monthly=daily*28.0f;
	}
		
	cout<<daily<<" "<<monthly;
	
	return 0;
}
