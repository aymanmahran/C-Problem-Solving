#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int arr[x],negi=0,posi=0,zeroi=0,neg[x],pos[x],zero[x],one[x],two[x],three[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
    neg[i]=0;
    pos[i]=0;
    one[i]=0;
    two[i]=0;
    three[i]=0;
    zero[i]=0;
    if(arr[i]<0){
        neg[negi]=arr[i];
        negi++;
    }
    else if(arr[i]>0){
        pos[posi]=arr[i];
        posi++;
    }
    else if(arr[i]==0){
        zero[zeroi]=arr[i];
        zeroi++;
    }
}
if(negi%2==1 && posi!=0){
        cout<<negi<<" ";
    for(int i=0;i<negi;i++){
        cout<<neg[i]<<" ";
    }
cout<<endl<<posi<<" ";
    for(int i=0;i<posi;i++){
        cout<<pos[i]<<" ";
    }
    cout<<endl<<zeroi<<" ";
    for(int i=0;i<zeroi;i++){
        cout<<zero[i]<<" ";
    }
     cout<<endl;
}
if(negi%2==1 && posi==0){
        cout<<negi-2<<" ";
    for(int i=0;i<negi-2;i++){
        cout<<neg[i]<<" ";
    }
cout<<endl<<"2 ";
    two[0]=neg[negi-2];
    two[1]=neg[negi-1];
    cout<<two[0]<<" "<<two[1]<<endl<<zeroi<<" ";
    for(int i=0;i<zeroi;i++){
        cout<<zero[i]<<" ";
    }
    cout<<endl;
}
if(negi%2==0 && posi!=0){
        cout<<negi-1<<" ";
    for(int i=0;i<negi-1;i++){
        cout<<neg[i]<<" ";
    }
cout<<endl<<posi<<" ";
    for(int i=0;i<posi;i++){
        cout<<pos[i]<<" ";
    }
    cout<<endl<<zeroi+1<<" ";
    for(int i=0;i<zeroi;i++){
        cout<<zero[i]<<" ";
    }
    three[zeroi]=neg[negi-1];
    cout<<three[zeroi]<<endl;
}
if(negi%2==0 && posi==0){
        cout<<negi-3<<" ";
    for(int i=0;i<negi-3;i++){
        cout<<neg[i]<<" ";
    }
cout<<endl<<"2 ";
    two[0]=neg[negi-3];
    two[1]=neg[negi-2];
    cout<<two[0]<<" "<<two[1]<<endl<<zeroi+1<<" ";
    for(int i=0;i<zeroi;i++){
        cout<<zero[i]<<" ";
    }
    three[zeroi]=neg[negi-1];
    cout<<three[zeroi]<<endl;
}
}
