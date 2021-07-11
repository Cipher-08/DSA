#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    int x;
    int y;
    int z;
    int d;
    int number;
    cin >> number;

    int arr[number];

    for (int i = 0; i < number; i++)
    {
        x = 0;
        y = 0;
        z = 0;
        d = 0;

        cin >> d;
        cin >> x;
        cin >> y;
        cin >> z;
        int wdbx = x * 7;
        int wdbb = (y * d) + (z * (7 - d));

        int arrnew = max(wdbx, wdbb);
        arr[i] = arrnew;
    }

    for (int i = 0; i < number; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}