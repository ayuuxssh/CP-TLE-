#include<bits/stdc++.h>
using namespace std;
#define int  long long
#define endl '\n'
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v(n,0);
    int q;cin>>q;
    while(q--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        v[l] +=x;
        v[r+1]-=x;
        for(int i=1;i<n;i++)
        {
            v[i] +=v[i-1];
        }
    }
    for(auto &it:v)
    {
        cout<<it<<" ";
    }
}