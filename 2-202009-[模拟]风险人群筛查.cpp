#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t, xl, yd, xr, yu;
    cin >> n >> k >> t >> xl >> yd >> xr >> yu;
    // k :连续停留
    // t :坐标个数

    int stayed = 0, res = 0;
    while (n--)
    {
        bool stay = false, staying = false;
        int time = 0;
        for (int i = 0; i < t; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x >= xl && x <= xr && y >= yd && y <= yu)  // 本次停留在了区域
            {
                time++;
                stay = true; //停留状态
                if (time >= k)
                    staying = true;
            }
            else
                time = 0;
        }
        if (stay)
            stayed++;
        if (staying)
            res++;
    }
    cout << stayed << endl
         << res;
    return 0;
}