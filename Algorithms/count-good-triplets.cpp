#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
vector<int> arr{3, 0, 1, 1, 9, 7};
int a=7;
int b=2;
int c=3;
int count=0;

for(int i=0;i<arr.size();i++)
{
    for(int j=0;j<arr.size();j++)
    {
        for(int k=0;k<arr.size();k++)
        {
            if((i>=0)&&(i<j)&&(j<k)&&(k<arr.size()))
            {
                cout<<"hello"<<"   ";
               if((arr[i]-arr[j]<=a)&&(arr[j]-arr[k]<=b)&&(arr[i]-arr[k]<=c))
               {

                  count++;
               }
            }
        }
    }
}
cout<<count;
 
return 0;
}