#include <bits/stdc++.h>
using namespace std;


long long int factorial(int n)
{

    if(n==1)return 1;
        return n* factorial(n-1);
}

int main(){
 
/* Code here  */
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
 

 for(int i=0;i<n;i++)
 {
     while((arr[i]/5)<=5)
     {
         
     }
 }
return 0;
}