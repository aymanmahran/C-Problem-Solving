#include <bits/stdc++.h>
using namespace std;
int main()
{
   int x;
   cin>>x;
   int event[x];
   int hird=0,cnt=0;
   for(int i=0;i<x;i++){
    cin>>event[i];
   }
   for(int i=0;i<x;i++){
    if(event[i]>0){
        hird+=event[i];
    }
    else if(event[i]<0 && hird>0){
        hird--;
    }
    else if(event[i]<0){
        cnt++;
    }
   }
   cout<<cnt;
}
