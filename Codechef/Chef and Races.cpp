#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define nn "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,gold=0;
        cin>>x>>y>>a>>b;
        if(x!=a&&x!=b)gold++;
        if(y!=a&&y!=b)gold++;
        cout<<gold<<nn;
    }

    return 0;
}
