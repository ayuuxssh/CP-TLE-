#include<bits/stdc++.h>
using namespace std;
#define int  long long
#define endl '\n'
//1 D PREFIX SUM
// void solve(int l,int r,vector<int>&prefix)
// {
//     if(l!=1)
//     {
// cout<<prefix[r-1]-prefix[l-1-1]<<endl;
//     }
//     else
//     cout<<prefix[r-1]<<endl;
// }
void solve(int l1,int r1,int l2,int r2,vector<vector<int>>&prefixsum)
{
    int ans = prefixsum[l2][r2];
if(l1>0)
{
    ans-=prefixsum[l1-1][r2];
}
if(r1>0)
ans -=prefixsum[l2][r1-1];
if(l1>0 && r1>0)
{
    ans +=prefixsum[l1-1][r1-1];
}
cout<<ans<<endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<vector<int>>v(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            v[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            v[i][j]=0;
            if(s[j]!='.')
            {
            v[i][j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(i>0)
    {
        v[i][j]+=v[i-1][j];
    }      
if(j>0)
{
    v[i][j]+=v[i][j-1];
} 
if(i>0 && j>0)
{
    v[i][j]-=v[i-1][j-1];
}
 }
    }
    while(q--)
    {
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        solve(l1-1,r1-1,l2-1,r2-1,v);
    }
}