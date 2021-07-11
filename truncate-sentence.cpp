#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
string s="saksham is a good boy";
int k=2;
string str,t;

int count=0;

for(int i=0;i<s.size();i++)
{
    if(s[i]==' ')////each space is counted
    {
       str+=t;
       t="";
       count++;
       
    }
    if(count==k)
    {
        break;
    }
    else
    {
     
       t+=s[i];
    }
}
str += t;

cout<<str;

return 0;
}