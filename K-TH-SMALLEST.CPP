#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
vector<vector<int>> matrix = {{1, 5, 9}, { 10, 11, 13 }, { 12, 13, 15 }};
int k=8;
vector<int>result;
for(int i=0;i<matrix.size();i++)
{
    for(int j=0;j<matrix[i].size();j++)
    {
        result.push_back(matrix[i][j]);
    }
}
cout<<result[k-1];
return 0;
}