#include<bits/stdc++.h>
using namespace std;
#define int  long long
#define endl '\n'
void sum(vector<int>&prefix,int l,int r)
{
    if(l!=0)
{
    cout<<(prefix[r]-prefix[l-1])<<endl;
}
else
{
    cout<<prefix[r]<<endl;
} 
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    vector<int>prefixsum(n);
    prefixsum[0]=v[0];
    for(int i=1;i<n;i++)
    {
        prefixsum[i]= prefixsum[i-1]+v[i];
    }
    sort(v.begin(),v.end());
 vector<int>prefix(n);
    prefix[0]=v[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]= prefix[i-1]+v[i];
    }
        int m;cin>>m;
    while(m--)
    {
        int l,r,type;
        cin>>type>>l>>r;
if(type==1)
{
    sum(prefixsum,--l,--r);
}
        else
        {
    sum(prefix,--l,--r);
        }
    }
}