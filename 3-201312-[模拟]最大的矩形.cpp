#include<bits/stdc++.h>
using namespace std;

int h[1010];

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)   cin>>h[i];

    int res =0;
    for(int i=1;i<=n;i++){
        int l=i,r=i;
        while(l>=1&&h[l]>=h[i]) l--;
        while(r<=n&&h[r]>=h[i]) r++;
        res = max(res,h[i]*(r-l-1));
    }
    cout << res;
    return 0;
}