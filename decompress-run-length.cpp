
#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    vector<int> nums{1, 1, 2, 3};
    vector<int> place;   //1 2
    vector<int> printed; //1 3
///1 3 3 
   vector<int> result;
    for (int i = 1; i < nums.size(); i++)
    {
        /* code */
        printed.push_back(nums[i]);
        i++;
    }
    // for (int i = 0; i < printed.size(); i++)
    // {
    //     /* code */
    //     // printed.push_back(nums[i]);
    //     cout << printed[i];
    // }

    for (int i = 0; i < nums.size(); i++)
    {
        /* code */
        place.push_back(nums[i]);

        i++;
    }

    int size;
    for (int i = 0; i < place.size(); i++)
    {
        /* code */
        size += place[i];
    }




    for (int i = 0; i < place.size(); i++)//2 
    {

        for (int j = 0; j < place[i]; j++)
        {
            /* code */
            
                /* code */
                // cout << printed[i];
                result.push_back(printed[i]);
            
        }
    }

    return result;
}