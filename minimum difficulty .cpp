#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
}
int maxi[x-2];
for(int i=0;i<x-2;i++){
    maxi[i]=0;
}
int mins=arr[0];
for(int i=1;i<x-1;i++){
    for(int j=0;j<x-1;j++){
        if((j+1)!=i){
        //    if(j!=x-1){
                int h=fabs(mins-arr[j+1]);
                maxi[i-1]=max(h,maxi[i-1]);
                mins=arr[j+1];
            }
       // }
    }
mins=arr[0];
}
sort(maxi,maxi+(x-2));
cout<<maxi[0]<<endl;
}
