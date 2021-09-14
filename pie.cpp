#include<bits/stdc++.h>
using namespace std;
int x,y,res,n,ex;
long double arr[10000],s=0,e=0,mide=0,ba=0;
int main()
{
    cin>>n;
    for(int u=0; u<n; u++)
    {
        cin>>x>>y;
        y+=1;
        for(int i=0; i<x; i++)
        {
            cin>>arr[i];
            arr[i]=( 3.14159265358979323846264338327950 )*pow(arr[i],2);
            e=max(e,arr[i]);
        }
        while(s<e)
        {
            long double mid=s+((e-s)/2);
            res=0;
            for(int i=0; i<x; i++)
            {
                res+=(arr[i]/mid);
                long double b=arr[i]/mid;
                if(b>=2)
                {
                    int h=b;
                    ex+=(h-1);
                }
            }
            if(res==y)
            {
                mide=max(mide,mid);
                s=mid;
            }
            else if(res<y)
            {
                e=mid;
                res=0;
                ex=0;
            }
            else if(res>y)
            {
                while(ex!=0)
                {
                    ex--;
                    res--;
                    if(res==y)
                    {
                        mide=max(mid,mide);
                        break;
                    }
                }
                s=mid;
                res=0;
                ex=0;
            }
            if(mid==ba)break;

            ba=mid;
        }
        cout<<fixed<<setprecision(4)<<mide<<endl;
        s=0;
        e=0;
        ex=0;
        res=0;
        mide=0;
    }
}

