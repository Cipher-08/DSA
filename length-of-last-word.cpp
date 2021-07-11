#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
string s="a is a boy";

int n= s.length();

int count=0;
for(int i=0;i<n;i++)
{
    if(s[i]==' ')
    {
        count++;
    }
}
cout<<count;

return 0;
}
