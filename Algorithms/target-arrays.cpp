#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
vector<int> nums{0, 1, 2, 3, 4};
vector<int> index{0, 1, 2, 2, 1};
int n=nums.size();
int result[n];
vector<int> result1;

for(int i=0;i<n;i++)
{
    result[index[i]]=nums[i];
}
for(int i=0;i<n;i++)
{
    cout<<result[i]<<" ";
}
 
return 0;
}