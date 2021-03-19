#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(ll n)
{
    if(n<1)return 1;
    return n*fact(n-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<fact(n)<<endl;
    }
}
