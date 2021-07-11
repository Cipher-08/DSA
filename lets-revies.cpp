#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
string result="hackerrank";
for(int i=0;i<result.length();i++)
{
    cout<<result[i];
    i++;
}
cout<<" ";
for (int i = 1; i < result.length(); i++)
{
    cout << result[i];
    i++;
}

return 0;
}