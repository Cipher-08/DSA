/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;

int factorial (int num){
    int product=1;
    
    for (int i = 1; i<=num; i++)
    {
        /* code */
        product = product * i;
    }
    return product;
   
}


int main(){
   //
/*Code here Saksham*/
    //
    int number;
    cout<<"Factorial of ? :";
    cin>>number;
    cout<<factorial(number);
   
    
}