/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;


int main(){
   //
/*Code here Saksham*/
    //
    int number ;
    cin>>number;
    int flag=0;

    for (int i = 2; i < sqrt(number); i++)
    {
        /* code */
        if(number%i==0){
            flag=1;
            break;
        }
        

    }
    if(flag==0){
        cout<<"Prime-Number ";

    }
    else
    {
        cout<<"Non-Prime";
    }
    
}