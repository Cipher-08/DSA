/* Hi Cypher */
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //
    /*Code here Saksham*/
    //
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int pd = arr[1] - arr[0]; 
    int curr=2; 
    int j = 2;
    int ans = 0;
    while (j < n)
    {
        /* code */
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            ans = curr;
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }

    cout << ans;
}