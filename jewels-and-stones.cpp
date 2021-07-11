#include <bits/stdc++.h>
using namespace std;

int main()
{

    string jewels = "aA";
    string stones = "aAAbbbb";
    int count=0;

    for (int i = 0; i < jewels.length();i++)
    {
        for(int j=0;j<stones.length();j++)
        {
            if(jewels[i]==stones[j])
            {
                count++;
            }
        }
    }
    cout<<count;
        return 0;
}