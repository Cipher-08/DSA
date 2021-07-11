/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;

void fib(int n){

    int t1=0;
    int t2=1;

    int next;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    

}


int main(){
   //
/*Code here Saksham*/
    //
    int number1;
    cin>>number1;

     fib(number1);

}