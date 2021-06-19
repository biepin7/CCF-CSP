#include <bits/stdc++.h>
using namespace std;

int a[110][110];

int main()
{
    int n;
    cin>>n;
    int res=0;
    while(n--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                a[i][j]=1;
            }
        }
    }
    for(int i=0;i<110;i++){
        for(int j=0;j<110;j++) if(a[i][j]) res++;
    }
    cout<<res;
    return 0;
}w