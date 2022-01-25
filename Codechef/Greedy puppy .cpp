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
    int test;
    cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        int mx=-1;
        for(int i=1;i<=k;i++){
            int x=(n%i);
            if(x>mx)mx=x;
        }
        cout<<mx<<endl;
    }

    return 0;
}
