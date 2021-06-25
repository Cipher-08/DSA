#include <bits/stdc++.h>
using namespace std;


int main(){

    vector<int> encoded{1, 2, 3};
    int first=1;

    vector<int> result;
    result.push_back(first);
    cout << "everything clear!!";

    for (int i = 0; i < encoded.size(); i++)
    {
        result.push_back(encoded[i]^result[i]);
  }
  cout<<"everything clear!!";

return 0;
}