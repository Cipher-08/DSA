/*Saksham Awasthi : A noob Coder .......*/
   
   
   
   
#include <bits/stdc++.h>
using namespace std;

int inclusion(int n, int a,int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);

    return (c1+c2-c3);
}

int main(){
 
/* Code here  */
 int n,a,b;
 cin>>n>>a>>b;
cout<<inclusion(n,a,b);
return 0;
}