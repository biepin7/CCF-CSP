#include<iostream>
#include<bits/stdc++.h>

using namespace std;

const int N = 256;


int n,m,l;

int res[N];

int main()
{
    cin>>n>>m>>l;
    for(int i=0;i<n*m;i++){
        int k;
        cin>>k;
        res[k]++;
    }
    for(int i=0;i<l;i++){
        cout<<res[i]<<" ";
    }

    return 0;
}

