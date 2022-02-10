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
    while(t--)
    {
        int n,x,y;
        cin>>n;
        set<int>a,b;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            a.insert(x);
            b.insert(y);
        }
        cout<<a.size()+b.size()<<endl;
    }
    return 0;
}
