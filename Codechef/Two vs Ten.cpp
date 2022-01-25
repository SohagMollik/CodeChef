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
        int x;
        cin>>x;
        if(x%5!=0)cout<<-1<<endl;
        else{
            if(x%10==0)cout<<0<<endl;
            else cout<<1<<endl;
        }
    }

    return 0;
}
