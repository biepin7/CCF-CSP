#include<bits/stdc++.h>
using namespace std;

const int N = 210;

struct p{
    int id;
    int d;
}q[N];

bool cmp(p p1,p p2){
    if(p1.d==p2.d) return p1.id<p2.id;
    else return p1.d < p2.d;
}

int main(){

    vector<vector<int>> v;

    int n,x,y;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int d = (a-x)*(a-x)+(b-y)*(b-y);
        q[i]={i+1,d};
    }
    sort(q,q+n,cmp);
    for(int i=0;i<3;i++) cout<<q[i].id<<endl;
    
}