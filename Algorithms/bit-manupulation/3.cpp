/*Saksham Awasthi : A noob Coder .......*/
   
   
   
   
#include <bits/stdc++.h>
using namespace std;

int onebitcount(int n){
    int count =0;
    while(n!=0){
        n=n&(n-1);
        count++;
    }
        count ;
}
int main(){


                    

/* Code here  */
cout<<onebitcount(5);
 
return 0;
}
