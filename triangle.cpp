#include<bits/stdc++.h>
using namespace std;
int main(){
    int side[4];
    cin>>side[0]>>side[1]>>side[2]>>side[3];
    sort(side,side+4);
    bool triangle=0,segment=0;
    for(int i=0;i<4;i++){
        for(int v=i+1;v<4;v++){
            for(int h=v+1;h<4;h++){
                if(side[i]+side[v]>side[h]){
                    triangle++;
                }
                else if(side[i]+side[v]==side[h]){
                    segment++;
                }
                else{
                    impossible++;
                }
            }
        }
    }
    if(triangle!=0){
        cout<<"TRIANGLE"<<endl;
    }
    else if(segment!=0){
        cout<<"SEGMENT"<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}
