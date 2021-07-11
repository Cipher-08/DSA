
#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
int n=4;
int start=3;
int arr[n];
for (int i = 0; i < n; i++)
{
    /* code */
    arr[i]=start+(2*i);
}
int result=0 ;

for (int i = 0; i < n; i++)
{
    /* code */
    // cout<<arr[i]<<" ";
    result=result^arr[i];

    
}
cout<<result;

///1^2^3^4^5
// cout<<(0^2); 2
// cout<<(2^4);

// cout<<result;
 
return 0;
}