/*Saksham Awasthi : A noob Coder .......*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    // int max = arr[0];
    vector<int> candies = {4, 2, 1, 1, 2};
    int max = candies[0];
    // cout << candies;
    int extraCandies = 3;

    ///

    vector<bool> result;
    vector<int> ne2w =candies;

    // cout<<candies;

    
    max=candies[candies.size()-1];
    // cout<<max;
    

    for (int i = 0; i < candies.size(); i++)
    {
        /* code */
        if (candies[i + 1] > candies[i])
        {
            max = 0;
            max = candies[i + 1];
            // cout << max <<" ";
        }
        else{

        }
    }
 

    for (int i = 0; i < candies.size(); i++)
    {
        /* code */
        if (ne2w[i] + extraCandies >= max)
        {
            result.push_back(true);
            // result=true;
        }
        else{
            result.push_back(false);
        }
    }

    // cout << candies[2];
cout<<result[1];


    return 0;
}