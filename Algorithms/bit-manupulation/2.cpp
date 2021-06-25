/*Saksham Awasthi : A noob Coder .......*/
   
   
   /////the power of 2's 
   //// n&n-1===0;
   
#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */



int n;
cout<<"Number :: >>>>> ";
cin>>n;
int c=n-1;
// cout << (n&c);

if(((n&c))==0){
    cout<<"it is a power of 2 <-";
}
else{
    cout<<" it is not a power of 2 <-";
}
 
return 0;
}