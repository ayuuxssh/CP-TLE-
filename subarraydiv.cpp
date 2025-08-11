#include<bits/stdc++.h>
using namespace std;
#define int  long long
#define endl '\n'
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    map<int,int>mp;
    mp[0]=1;
    int count =0;int sum=0;
    for(int i=0;i<n;i++)
    {
    sum +=v[i];
    mp[(sum%n+n)%n]++;
    }
    for(auto it:mp)
    {
    count +=it.second*(it.second-1)/2;
    }
    cout<<count<<endl;
}