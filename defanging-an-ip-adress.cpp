#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
string adress = "1.1.1.1";
string result;

for(int i=0;i<adress.length();i++)
{
    if(adress[i]=='.')
    {
        result.push_back('[');
            result.push_back('.');
                result.push_back(']');
    }
    else
    {
        result.push_back(adress[i]);
    }
}
 for(int i=0;i<result.size();i++)
 {
     cout<<result[i];
 }
return 0;
}