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
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int  j=i-1;
        /* code */
        while (arr[j]>current&&j>=0)
        {
            /* code */
            if(arr[j]>current){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=current;

        }

        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    
    
}