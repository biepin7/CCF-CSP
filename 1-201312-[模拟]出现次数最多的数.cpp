#include<bits/stdc++.h>
using namespace std;

int s[10010];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s[temp]++;
    }
    int res=0;
    for(int i=0;i<10010;i++){
        if(s[i]>s[res]) 
        {
            res=i;
        }
    }
    cout<<res;
    return 0;
}