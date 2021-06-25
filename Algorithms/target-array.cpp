#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */

vector<int>nums;
vector<int>index;

vector<int>target;

for(int i=0; i<nums.size();i++)
{
    target.push_back(nums[index[i]]);
}
 for(int i=0;i<target.size();i++)
 {
     cout<<target[i]<<" ";
 }
return 0;
}