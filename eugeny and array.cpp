#include<bits/stdc++.h>
using namespace std;
int x,y,a1,a2,arr[200000];
int main()
{
  scanf ("%d",&x);
  scanf ("%d",&y);

    for(int i=0; i<x; i++)
    {
        int h;
  scanf ("%d",&h);
          if(h==1)
        {
            a1++;
        }
        else
        {
            a2++;
        }
    }
    for(int i=0; i<y; i++)
    {
        int j,g;
        scanf ("%d",&j);
        scanf ("%d",&g);
        arr[i]=g-j;
        arr[i]+=1;
        if((arr[i]%2==0)&&(arr[i]<=a1+a1)&&(arr[i]<=a2+a2))
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }
    for(int i=0; i<y; i++)
    {
   printf ("%d \n", arr[i]);
    }
}
