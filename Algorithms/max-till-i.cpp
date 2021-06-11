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

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            arr[i] = max(arr[i], arr[i - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}