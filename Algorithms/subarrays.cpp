/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;


int main(){
   //
/*Code here Saksham*/
    //
    int n;
    cin>>n;
    int arr[n];
    int sum =0;
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum =0;
        /* code */
        for (int j = i; j < n; j++)
        {
            /* code */
            // cout<<arr[i];
            sum+=arr[j];
            cout << sum<<" "<<endl;
        }

   
    }

  
    
}