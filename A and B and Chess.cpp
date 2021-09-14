#include<bits/stdc++.h>
using namespace std;
int main(){
string chess[8];
int white=0,black=0;
for(int i=0;i<8;i++){
    cin>>chess[i];
    for(int v=0;v<8;v++){
        if(chess[i][v]=='Q'){
            white+=9;
        }
        else if(chess[i][v]=='R'){
            white+=5;
        }
        else if(chess[i][v]=='B'){
            white+=3;
        }
        else if(chess[i][v]=='N'){
            white+=3;
        }
        else if(chess[i][v]=='P'){
            white+=1;
        }
        else if(chess[i][v]=='q'){
            black+=9;
        }
        else if(chess[i][v]=='r'){
            black+=5;
        }
        else if(chess[i][v]=='b'){
            black+=3;
        }
        else if(chess[i][v]=='n'){
            black+=3;
        }
        else if(chess[i][v]=='p'){
            black+=1;
        }
    }
}
if(white>black){
    cout<<"White"<<endl;
}
else if(black>white){
    cout<<"Black"<<endl;
}
else if(white==black){
    cout<<"Draw"<<endl;
}
}
