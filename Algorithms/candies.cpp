
#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    vector<int> candies{2, 3, 5, 1, 3};
   
    int extraCandies;

    
    

    //begin ;
    //  cout<<max<<" ";
    // cout<<max;
    vector<int> new1 = candies;
    vector<bool> result;

    sort(candies.begin(), candies.end());
    int max = candies[candies.size() - 1];

    for (int i = 0; i < new1.size(); i++)
    {
        /* code */
        if((new1[i]+extraCandies )>=max){
            result.push_back(true);
        }
        else{
            result.push_back(false);
        }
    }
    

    return result;
}