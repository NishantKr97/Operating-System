// Program for First Come First Serve

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the no. of processes : ";
    cin>>n;
    int a[n][5]={0};
    cout<<"Enter arrival time of each process  : \n";
    for(i=0;i<n;i++)
        cin>>a[i][0];
    cout<<"Enter burst time of each process  : \n";
    for(i=0;i<n;i++)
        cin>>a[i][1];

    k = a[0][1];
    a[0][2] = k;
    for(i=1;i<n;i++)
    {
        a[i][2] = k + a[i][1];
        k = a[i][2];
    }

    for(i=0;i<n;i++)
    {
        a[i][3] = a[i][2] - a[i][0];
    }

    for(i=0;i<n;i++)
    {
        a[i][4] = a[i][3] - a[i][1];
    }

    cout<<"A.T          B.T         C.T         T.O.T           W.T\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            cout<<a[i][j]<<"            ";
        }
        cout<<endl;
    }

}
