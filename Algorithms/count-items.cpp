#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
vector<vector<string>> items{ 
    {"phone", "blue", "pixel"} ,//i=0
 { "computer", "silver", "lenovo"} ,//i=1
  { "phone", "silver", "iphone"} };//i=2
string ruleKey = "color"; //key
string ruleValue = "silver"; //value
// cout<<items[1][1];
///
int count =0;

// for(int i=0;i<items.size();i++)
// {

//     for(int j=0;j<items.size();j++)
//     {
       

//         if (ruleKey == "type")
//         {
//             if(ruleValue==items[0][j]){
//                 count++;
//                 // cout<<"1";
//                 // cout << "hey";
//             }
//         }
//         if (ruleKey == "color")
//         {
//             if (items[1][j] == ruleValue)
//             {
//                 cout << "hey";

//                 count++;
//                 cout << "2";
            
//             }
//         }
//         if (ruleKey == "name")
//         {
//             if (items[i][2] == ruleValue)
//             {
//                 count++;
//                 // cout << "";
//             }
//         }
// }
if (ruleKey == "type")
{
 for(int i=0;i<items.size();i++){
     for(int j=0;j<1;j++){
         if(items[i][j]==ruleValue)
         {
             count++;
         }
     }

}
}

if (ruleKey == "color")
{
    for (int i = 0; i < items.size(); i++)
    {
        for (int j = 1; j < 2; j++)
        {
            if (items[i][j] == ruleValue)
            {
                count++;
            }
        }
    }
}

if (ruleKey == "name")
{
    for (int i = 0; i < items.size(); i++)
    {
        for (int j = 2; j < 3; j++)
        {
            if (items[i][j] == ruleValue)
            {
                count++;
            }
        }
    }
}


 
return count;
}

