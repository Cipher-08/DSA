#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
int number;
cin>>number;
int c;
int g;
int arr[number];
for(int i=0;i<number;i++)
{
   c=0;
   g=0;
  cin>>g>>c;
  int result = (c*c)/(2*g);
  arr[i]=result;
}
 for(int i=0;i<number;i++)
 {
     cout<<arr[i]<<endl;
 }
return 0;
}