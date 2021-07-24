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
        int r1,r2,w1,w2,c1,c2;
        cin>>r1>>w1>>c1>>r2>>w2>>c2;
        int a1=0,a2=0,b1=0,b2=0,d1=0,d2=0,ans1,ans2;
        if(r1>r2)a1=1;
        if(w1>w2)b1=1;
        if(c1>c2)d1=1;
         if(r2>r1)a2=1;
         if(w2>w1)b2=1;
         if(c2>c1)d2=1;
        ans1=a1+b1+d1;
        ans2=a2+b2+d2;
        if(ans1>ans2)cout<<"A\n";
        else cout<<"B\n";
    }
    return 0;
}
