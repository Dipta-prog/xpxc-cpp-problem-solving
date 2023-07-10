/*
https://codeforces.com/contest/1642/problem/C
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void solve()
{
    long long int n,k;
    cin>>n>>k;
    map<long long int,long long int>m;
    vector<long long int>v(n);
    for(long long int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }

    long long int ans=n;
    sort(v.begin(),v.end());
    for(long long int i=0;i<n;i++){
        if(v[i]%k==0&&m[v[i]/k]>0){
            ans-=2;
            m[v[i]]--;
            m[v[i]/k]--;
        }
    }
    cout<<ans<<"\n";
}
 
int main()
{
    int t = 1;
    cin >> t;
    for (long long int i = 1; i <= t; i++)
        solve();

    return 0;
}
 
