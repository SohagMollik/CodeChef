#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ans=0,x;
    for(int i=1;i<=n;i++){
            cin>>x;
        if(i+ans==x)ans++;
    }
    cout<<ans<<endl;
    }
    return 0;
}
