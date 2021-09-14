#include<bits/stdc++.h>
using namespace std;
int x,arr[1000],sum;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        if(i!=j){
            sum=arr[i]+arr[j];
            for(int v=0;v<x;v++){
                if(arr[v]==sum&&v!=i&&v!=j){
                    cout<<v+1<<" "<<i+1<<" "<<j+1<<endl;
                    exit(0);
                }
            }
        }
    }
}
cout<<"-1"<<endl;
}
