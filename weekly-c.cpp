#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
vector<int> nums{3, 2, 2, 3};
int val=3;
vector<int> v;
for (int i = 0; i < nums.size(); i++)
{
    if (nums[i] != val)
    {
        v.push_back(nums[i]);
    }
}
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}

return 0;
}