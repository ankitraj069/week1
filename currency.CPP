#include <iostream>

using namespace std;

int main()
{
    int feq=0,amt=0;
    cin>>amt;
    int A[10]={2000, 500,  200,  100, 50,  20, 10,  5, 2,  1};
    for(int i=0;i<10;i++)
    {
        if(amt>=A[i])
        {
            feq=amt/A[i];
            amt=amt%A[i];
            cout<<feq<<"";
        }
        else cout<<"0"<<"";
    }
    return 0;
}
