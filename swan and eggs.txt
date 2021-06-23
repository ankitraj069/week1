#include <iostream>
using namespace std;
int main()
 {
	int n;
	cin>>n;
	int age[50],tot=0;
	for(int i=0;i<n;i++)
	{
		cin>>age[i];
	}
	for(int j=0;j<4;j++)
    {
	   for(int k=0;k<=n;k++)
       	{
	     	if (age[k]>=13)
            {
	     	tot+=4;
	     	age[k+1];
            }
	     	else
            age[k+1];
     	}
    }
    cout<<tot<<endl;
	return 0;
}
