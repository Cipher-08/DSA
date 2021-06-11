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
    arr[n+1];
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    if(n==1){
        cout<<1;
        return 0;
    }
    int ans=0;
    int mx=-1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i]>mx && arr[i+1]<arr[i])
        {
            ans++;
        }
        mx=max(mx,ans);

    }
    cout<<ans;
    

}