#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    int N;
    cin >> N;
    int n[N];
    int sum[N];
    
    /////the number of test cases
    for (int i = 0; i < N; i++)
    {
        int a = n[i];
         cin >> a;
        int arr[a];

        ///taking th einput of the inner array
        for (int j = 0; j < a; j++)
        {
            cin >> arr[j];
        }
        int min = arr[0];
        int max = arr[0];


        /////for the maximum

        for (int j = 0; j < a; j++)
        {
         

                if (arr[j] > max)
                    max = arr[j];
        }
        // cout<<"max = "<<max<<endl;

        /////for the minimum

        for (int j = 0; j < a; j++)
        {

            if (arr[j] < min)
                min = arr[j];
        }
        // cout << "min = " << min << endl;

        ///////to replace it the max with the min 

        for(int j=0;j<a;j++)
        {
            if(arr[j]==max)
            {
              arr[j]=min;
            }
        }

        // cout<<"after replacing max with the min";

        // for(int j=0;j<a;j++)
        // {
        //     cout<<arr[j]<<" ";
        // }


        ///////now we have to divide the min with the array 
        int newarr[a];
        for(int j=0;j<a;j++)
        {
            newarr[j]=arr[j]/min;
        }


        
        sum[i]=0;

        for(int j=0;j<a;j++)
        {
           sum[i]+=newarr[j];
        }
        // cout<<sum<<endl;
    }

    for(int i=0;i<N;i++)
    {
        cout<<sum[i]<<endl;
    }

    return 0;
}