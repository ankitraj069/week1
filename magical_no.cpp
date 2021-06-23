#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

char * type(long long n){
	if(n<0)
		return "Error";
	int len,d,p=1,q=1;
	bool even=false;
	
	len=floor(log10(n)+1);
	even=len%2==0?true:false;
	if(len>0&&len<=10){
		while(n){
			d=n%10;
			n/=10;
			if(d>0)
				even?p*=d:q*=d;
			even=!even;
		}
		if(p>q)
			return "Dominant";
		else
			return "Magic";
	}
	return "Error";
}

int main(){
	int t;
	long long n;
	cin>>t;
	if(t>0){
		while(t--){
			cin>>n;
			cout<<type(n)<<" ";
		}
	}
	else
		cout<<"Error";
	return 0;
}
