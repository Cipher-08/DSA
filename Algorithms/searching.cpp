/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;


void linearSearch(int arr[],int n , int key){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]==key){
            cout<<key<<" is at "<<i+1<<" position "<<endl;
            count=1;
            break;
        }


        
    }

    if (count == 0)
    {
        cout << "  -> not found <-";
    }
    
}

int main(){
   //
/*Code here Saksham*/
    //
    int n;
    cout<<"Size of array :: ";
    cin>>n;
    int arr[n];
    int key=0;
    cout<<"Enter array :: ";

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"KEY?? : ";
    cin>>key;
  
    
    linearSearch(arr,n,key);
    
    
}