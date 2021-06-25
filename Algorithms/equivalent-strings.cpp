#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
vector<string>word1{"sak","sham"};
vector<string>word2;

vector<string>result1;
vector<string> result2;

string sum1;
string sum2;


for(int i=0;i<word1.size();i++)
{
    sum1+=word1[i];
}

for (int i = 0; i < word2.size(); i++)
{
    sum2 += word2[i];
}

if(sum1==sum2)
{
    return true;
}
else{
    return false;
}

}