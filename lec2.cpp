#include<bits/stdc++.h>
using namespace std;
#define int  long long
#define endl '\n'
void solved(vector<int>&prefix,vector<int>&prefixi,int l,int r)
{
    cout<<(prefixi[r]-prefixi[l-1] )- (l-1)*(prefix[r]-prefix[l-1])<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v(n+1);
   for(int i=1;i<=n;i++)
   cin>>v[i];
    vector<int>prefix(n+1,0);
    vector<int>prefixi(n+1,0);
for(int i=1;i<=n;i++)
{
    prefix[i] =prefix[i-1]+v[i];
    prefixi[i] =prefixi[i-1]+(i*v[i]);
}
    int q;cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        solved(prefix,prefixi,l,r);
    }
}