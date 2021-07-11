#include <bits/stdc++.h>
using namespace std;
int rec(int num)
{
    if(num==0) return 0;
    if(num==1) return 1;

    if(num%2==0) return rec(num/2);
    else return 1+rec(num/2);
}
int main(){
 int n=5;
/* Code here  */
int [] ans = new int[n+1];
for(int i=0;i<n+1;i++)
 {
    ans[i]=rec(i);
 }
return 0;
}