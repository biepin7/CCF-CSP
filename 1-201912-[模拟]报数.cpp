#include <bits/stdc++.h>
using namespace std;

int a[4];

bool in(int i){
        while(i>6){
            if(i%10 == 7 ) return true;
            i /=10;
        }
        return false;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 1 ;i<=n;i++){
        if(i%7==0 || in(i)) a[(i)%4]++;
    }
    for(int i:a) cout<<i<<endl;
    return 0;
}