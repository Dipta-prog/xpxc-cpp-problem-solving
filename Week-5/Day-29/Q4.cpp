/*
https://codeforces.com/contest/1714/problem/A
*/
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h, M, H, ans_h, ans_m, min_h = 23, min_m = 59;
        cin >> n >> H >> M;
        while (n--)
        {
            cin >> h >> m;
            if (h == H)
            {
                if (m < M)
                {
                    ans_m = m - M + 60;
                    ans_h = h - H - 1 + 24;
                }
                else
                {
                    ans_m = m - M;
                    ans_h = h - H;
                }
            }
            else if (h < H)
            {
                if (m < M)
                {
                    ans_m = m - M + 60;
                    ans_h = h - H - 1 + 24;
                }
                else
                {
                    ans_m = m - M;
                    ans_h = h - H + 24;
                }
            }
            else
            {
                if (m < M)
                {
                    ans_m = m - M + 60;
                    ans_h = h - H - 1;
                }
                else
                {
                    ans_m = m - M;
                    ans_h = h - H;
                }
            }
            if (ans_h < min_h || ans_h == min_h && ans_m < min_m)
            {
                min_h = ans_h;
                min_m = ans_m;
            }
        }
        cout << min_h << " " << min_m << endl;
    }
    return 0;
}
