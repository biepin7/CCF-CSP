#include<bits/stdc++.h>
using namespace std;

int a[1010];

int main(){
    int n,res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[abs(x)]++;
    }
    for(int i:a){
        if(i>1) res++;
    }
    cout<<res<<endl;
    return 0;
}