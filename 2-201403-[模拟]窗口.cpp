#include<bits/stdc++.h>
using namespace std;

const int N = 11;

int n,m;

struct Window{
    int x1, y1, x2, y2;
    int id;
}w[N];

int find(int x, int y){

    for(int i=n;i>0;i--){
        if(x>=w[i].x1&&x<=w[i].x2&&y>=w[i].y1&&y<=w[i].y2){
            return i;
        }
    }

    return 0;
}

int main(){
    
    cin>>n>>m; 
    for(int i=1;i<=n;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        w[i]={x1,y1,x2,y2,i};
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        int res = find(x,y);
        if(!res){cout<<"IGNORED"<<endl;}
        else{
            cout<<w[res].id<<endl;
            auto toend=w[res];
            for(int i = res;i<n;i++) w[i] = w[i+1];
            w[n]= toend;   
        }
    }

    return 0;
}