#include<bits/stdc++.h>
using namespace std;
int x,y,xx,yy,c1,c2;
int main()
{
    cin>>x>>y>>xx>>yy;
    if(x==xx||y==yy)
    {
        cout<<"1 ";
    }
    else
    {
        cout<<"2 ";
    }
    if(y%2==1&&x%2==1)
    {
        c1=0;
    }
    if(y%2==1&&x%2==0)
    {
        c1=1;
    }
    if(y%2==0&&x%2==1)
    {
        c1=1;
    }
    if(y%2==0&&x%2==0)
    {
        c1=0;
    }

    if(yy%2==1&&xx%2==1)
    {
        c2=0;
    }
    if(yy%2==1&&xx%2==0)
    {
        c2=1;
    }
    if(yy%2==0&&xx%2==1)
    {
        c2=1;
    }
    if(yy%2==0&&xx%2==0)
    {
        c2=0;
    }

    if(c1!=c2)
    {
        cout<<"0 ";
    }
    else
    {
        if(abs(xx-x)==abs(yy-y))
        {
            cout<<"1 ";
        }
        else
        {
            cout<<"2 ";
        }
    }
    cout<<max(abs(xx-x),abs(yy-y))<<endl;
}
