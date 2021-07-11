#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    vector<vector<int>> image{{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    vector<vector<int>> reverse;

    for (int i = 0; i < image.size(); i++)
    {
        vector<int> temp;
        for (int j = image.size() - 1; j > -1; --j)
        {
            /* code */
            // cout<<image[i][j]<<" ";
            temp.push_back(image[i][j]);
        }
        // cout<<endl;
        reverse.push_back(temp);
    }
    vector<vector<int>> invert;
    for (int i = 0; i < reverse.size(); i++)
    {
        vector<int>tp;
        /* code */
        for(int j=0;j<reverse.size();j++)
        {
         if(reverse[i][j]==0)
         {
             tp.push_back(1);
         }
         else{
             tp.push_back(0);
         }
        }
        invert.push_back(tp);
    }

    ////
 

    return invert;
}