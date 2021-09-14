#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x,w=0;
    cin>>x;
   long long price[x],quality[x];
   for(long long i=0;i<x;i++){
    cin>>price[i]>>quality[i];
   }
   for(long long i=0;i<x;i++){
    if(price[i]<quality[i]){
        w++;
    }
   }
   if(w!=0){
    cout<<"Happy Alex"<<endl;
   }
   else{
    cout<<"Poor Alex"<<endl;
   }
}
