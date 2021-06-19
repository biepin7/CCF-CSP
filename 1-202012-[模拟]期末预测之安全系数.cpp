#include<bits/stdc++.h>
using namespace std;

const int N = 10010;
int n,res,sum;
int a[N];

int main(){

    cin>>n;

    while(n--){
        int x,y;
        cin>>x>>y;
        sum +=x*y;
    }
    cout<<max(0,sum);
    return 0;
}