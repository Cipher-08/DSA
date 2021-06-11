/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;


int main(){
   //
/*Code here Saksham*/
    //
    int number;
    int last_digit,num=0;
    cin>>number;
    while (number>0)
    {
        /* code */
        last_digit = number%10;
        num=num*10+last_digit;
        number=number/10;
       
        // cout<<number<<endl;
        

    }

    cout << num << endl;
}