
#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<vector<int>> mat={{ 1, 1, 0, 0, 0 },{ 1, 1, 1, 1, 0 }, { 1, 0, 0, 0, 0 } , { 1, 1, 0, 0, 0 },{ 1, 1, 1, 1, 1  }}
        ;
    int k=3;
    vector<int> counter;

    for(int i=0;i<mat.size();i++)
    {
        int count = 0;

        for(int j=0;j<mat[i].size();j++)
        {
            if(mat[i][j]==1)
            {
                count++;
            }
        }
        counter.push_back(count);

    }
    vector<int>dummy;

    for(int i=0;i<counter.size();i++)
    {

        dummy.push_back(counter[i]);
       
    }
    sort(counter.begin(),counter.end());
    vector<int> result;

    for (int i = 0; i < k; i++)
    {
        for(int j=0;j<dummy.size();j++)
        {
            if(counter[i]==dummy[j]){
                result.push_back(j);
                dummy[j]=INT_MIN;
                break;
            }
        }
    }
  
}