#include<bits/stdc++.h>
using namespace std;
long long x,y,arr[200001];
long double no;
int main()
{
        cin>>x>>y;
        for(int i=0; i<x*2; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+(x*2));

        no=arr[0] < arr[x]/2.0 ? arr[0] : arr[x]/2.0;

        no*=(double)3*x;

        if(no<(double)y)cout<<fixed<<setprecision(10)<<no<<endl;

        else cout<<y<<endl;
}
