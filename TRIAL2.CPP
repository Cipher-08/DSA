#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    vector<vector<int>> accounts
    {
        {1, 2, 3} ,
        {3, 2, 1},
        {2,3,4}
        
    };
   
   

    for (int i = 0; i < accounts.size(); i++)
    {
     
        for (int j = 0; j < accounts.size(); j++)
        {
 
            cout << accounts[i][j] << " ";
        }
    
    }

  
    return 0;
}