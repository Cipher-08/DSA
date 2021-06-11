/*Saksham Awasthi : A noob Coder .......*/
   
   
   
   
#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
int n,m;
cout<<"Enter rows then col :: ";
cin>>n>>m;

int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }
    cout<<"Your trnasposed mattrix is :: ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

return 0;
}