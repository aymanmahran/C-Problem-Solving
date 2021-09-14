#include<bits/stdc++.h>
using namespace std;
int arr[4][4];
bool flag;
int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    if(arr[0][3]&&(arr[0][0]||arr[0][1]||arr[0][2]||arr[1][0]||arr[2][1]||arr[3][2]))flag=1;
    if(arr[1][3]&&(arr[1][0]||arr[1][1]||arr[1][2]||arr[0][2]||arr[2][0]||arr[3][1]))flag=1;
    if(arr[2][3]&&(arr[2][0]||arr[2][1]||arr[2][2]||arr[0][1]||arr[1][2]||arr[3][0]))flag=1;
    if(arr[3][3]&&(arr[3][0]||arr[3][1]||arr[3][2]||arr[1][1]||arr[0][0]||arr[2][2]))flag=1;
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
