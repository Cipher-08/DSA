/*Saksham Awasthi : A noob Coder .......*/
   
   
   
   
#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
vector<int> nums{8, 1, 2, 2, 3};
int n = nums.size();
// cout<<n;
vector<int> dupli(n);
for (int i = 0; i < nums.size(); i++)
{
    /* code */
    for (int j = 0; j < n; j++)
    {
        /* code */
        if(nums[i]>nums[j]){
            dupli[i]++;
        }
    }
    
}


 
return dupli;
}