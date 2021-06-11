/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;

int primenice(int m)
{
    for (int i = 2; i <= sqrt(m); i++)
    {
        /* code */
        if(m%i==0)
        {
            return false;
        }
       
    }
    return true;
    
}

void prime(int a,int b){

    
    for (int i = a; i < b; i++)
    {
        /* code */
        if(primenice(i)==true){
            cout<<i<<endl;
        }
       
    }
    

}

int main(){
   //
/*Code here Saksham*/
    //
    int first ,second;
    cout<<"First number -> ";
    cin>>first;
    cout<<"second number-> ";
    cin>>second;
    cout<<"The prime number between "<<first<<" and "<<second<<" are :  ";
    prime(first,second);

}