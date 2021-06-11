/*Saksham Awasthi : A noob Coder .......*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int a1[n1][n2];
    int a2[n2][n3];


   cout<<"Enter first array of size "<<n1<<"X"<<n2<<endl;
    for (int i = 0; i < n1; i++)
    {
        /* code */
        for (int j = 0; j < n2; j++)
        {
            /* code */
            cin >> a1[i][j];
        }
    }
    cout << "Enter second array of size " << n2 << "X" << n3 << endl;

    for (int i = 0; i < n2; i++)
    {
        /* code */
        for (int j = 0; j < n3; j++)
        {
            /* code */
            cin >> a2[i][j];
        }
    }

    int ans[n1][n3];

    for (int i = 0; i < n1; i++)
    {
        /* code */
        for (int j = 0; j < n3; j++)
        {
            /* code */
            ans[i][j]=0;
        }
        
    }
    cout<<"Answer is :: ";


    for (int i = 0; i < n1; i++)
    {
        /* code */
        for (int j = 0; j < n3; j++)
        {
            /* code */
           for (int k = 0; k < n2; k++)
           {
               /* code */
               ans[i][j]+= a1[i][k]*a2[k][j];
           }
           
        }
    }
    for (int i = 0; i < n1; i++)
    {
        /* code */
        for (int j = 0; j < n3; j++)
        {
            /* code */
           cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}