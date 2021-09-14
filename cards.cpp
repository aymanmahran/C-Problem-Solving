#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin>>x;
    long long sco[x];
    for(long long i=0;i<x;i++){
        cin>>sco[i];
    }
    long long sum=0;
    long long s=0,d=0,y=x-1,i=0;
    for(long long i=0;i<x;i++){
             sum+=sco[i];
         }

     while(sum!=0){

       if(sco[i]>sco[y]){
        s+=sco[i];
        sum-=sco[i];
            swap(s,d);
         i++;
       }
       if(sco[i]<sco[y]){
        s+=sco[y];
        sum-=sco[y];
                 swap(s,d);

        y--;
       }
        if(i==y){
        s+=sco[y];
        sum-=sco[y];
                 swap(s,d);

        y--;
       }


     }
     if(x%2==1){
                 swap(s,d);

     }
    cout<<s<<" "<<d;
}
