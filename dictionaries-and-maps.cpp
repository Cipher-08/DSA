#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
int n;
cin>>n;
vector<string> dummy;
for(int i=0;i<3*n;i++)
{
   string input ;
   cin>>input;
   dummy.push_back(input); 
}
vector<string> result;
int j=0;
for(int i=0;i<2*n;i++)
{
    
    if(dummy[i]==dummy[(2*n)+j]){
    cout<<dummy[i]+"="<<dummy[i+1]<<endl;
    }
    else{
        cout << "Not found"<<endl;
    }
 

    i++;
    j++;
   
}


return 0;
}