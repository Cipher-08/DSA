#include <bits/stdc++.h>
using namespace std;

bool check(int x,int y,int z){
    
   int a;
   a=max(x,max(y,z));
   int b,c;

   if(a==x){
       b=y;
       c=z;
   }
   else if(a==y){
       b=x;
       c=z;

   }
   else{
       b=x;
       c=y;
   }
   

   if(a*a==b*b+c*c)
       return true;
   
   else 
       return false;
   
}

int main(){
   //
/*Code here Saksham*/
    //
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    
    if(check(num1,num2,num3)){
        cout<<"Pythgaurus Triplet";
    }
    else{
        cout<<"NOT";
    }
}