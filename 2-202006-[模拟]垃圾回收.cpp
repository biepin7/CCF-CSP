#include <bits/stdc++.h>

#define x first
#define y second
using namespace std;
typedef pair<int,int> PII;
typedef long long LL;
const int N = 1010;

/** 坐标有负数
int n;

PII a[N];

int res[5];

int b[N][N];

int main()
{
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a[i].x>>a[i].y;
        b[a[i].x][a[i].y] = 1;
        }

    for(int i=0; i<n; i++){
        if(b[a[i].x -1][a[i].y] && b[a[i].x +1][a[i].y] && b[a[i].x][a[i].y -1]  && b[a[i].x][a[i].y +1]){
            int score= 0;
            if(b[a[i].x -1][a[i].y]-1) score++;
            if(b[a[i].x -1][a[i].y]+1) score++;
            if(b[a[i].x +1][a[i].y]-1) score++;
            if(b[a[i].x +1][a[i].y]+1) score++;
            res[score]++;
        }
    }

    for(int i:res) cout<<i<<endl;
    return 0;
}
**/

int n;
PII q[N];
int ans[5];
int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main()
{
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> q[i].x >> q[i].y;
    
    for (int i = 0; i < n; i ++ )
    {
        int s[8] = {0};
        for (int j = 0; j < n; j ++ )
            for (int k = 0; k < 8; k ++ )
                if (q[i].x + dx[k] == q[j].x && q[i].y + dy[k] == q[j].y)
                    s[k] ++ ;
        if (s[1] && s[3] && s[5] && s[7])
            ans[s[0] + s[2] + s[4] + s[6]] ++ ;
    }

    for (int i = 0; i < 5; i ++ ) cout << ans[i] << endl;
    return 0;
}