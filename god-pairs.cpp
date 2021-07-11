/*Saksham Awasthi : A noob Coder .......*/
   
   
   
   
#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
vector<int> nums{1, 1, 1, 1};
int count=0;
for (int i = 0; i < nums.size(); i++)
{
    /* code */
    for (int j = 0; j < i; j++)
    {
        /* code */
        if(nums[i]==nums[j]){
            count++;
            // cout<<"("<<j<<","<<i<<")";
        }
        else{

        }
    }
    
}

 
return count;
}