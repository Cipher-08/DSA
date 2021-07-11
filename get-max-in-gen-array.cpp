#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
int n=7;
int nums[n];
for(int i=0;i<n;i++)
{
    
    if (2 <= 2 * i && 2 * i <= n)
    {
        nums[2 * i] = nums[i];
   
    }
    else if (2 <= 2 * i + 1 && 2 * i + 1 <= n)
        nums[2 * i + 1] = nums[i] + nums[i + 1];
}
for(int i=0;i<n;i++)
{
    cout<<nums[i]<<endl;
}
 
return 0;
}