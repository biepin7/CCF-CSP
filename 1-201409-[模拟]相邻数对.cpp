#include<bits/stdc++.h>
using namespace std;

const int N = 10010;
int n,res;
int a[N];

int main(){

    cin>>n;

    while(n--){
        int x;
        cin>>x;
        a[x]++;
    }
    for(int i=0;i<N;i++){
        if(a[i]&&a[i+1]) res++;
    }

    cout<<res;
    return 0;
}