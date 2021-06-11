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
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        for (int j=i+1;j<n; j++)
        {
            /* code */
            if(arr[j]<arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }

        }

        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    
    
}