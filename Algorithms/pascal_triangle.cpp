/* Hi Cypher */
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int product = 1;

    for (int i = 2; i <= num; i++)
    {
        /* code */
        product = product * i;
    }
    return product;
}

int binary(int n,int r){
    int bin;
    int a = (factorial(n));
    int b = (factorial(n - r) * factorial(r));
    bin = a / b;
    return bin;

}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout<<binary(i,j)<<" ";
        }
        cout<<endl;
        
    }

    
}