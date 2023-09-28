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
        cin>>n>>x>>y;
        if(n<=100)
        {
            int xx;
            if(n%4!=0)
                xx=(n/4)+1;
            else xx=n/4;
            int mn=min(x,xx*y);
            cout<<mn<<endl;
        }
        else{
                vector<int>v;
                if(n%100==0)
                {
                    int ss,dd;
                    ss=n/100;
                    dd=x*ss;
                    v.pb(dd);
                }
                if(n%100!=0)
                {
                    int ss,dd;
                    ss=(n/100)+1;
                    dd=x*ss;
                    v.pb(dd);
                }
                if(n%4==0)
                {
                    int ss,dd;
                    ss=n/4;
                    dd=y*ss;
                    v.pb(dd);
                }
                if(n%4!=0)
                {
                    int ss,dd;
                    ss=(n/4)+1;
                    dd=y*ss;
                    v.pb(dd);
                }
            if(n%100==0||n%100!=0||n%4==0||n%4!=0){
            int bb,kk,m;
             kk=(n/100);
             m=n%100;
            if(m%4!=0)
             bb=(m/4)+1;
            else bb=m/4;
            int cost3=(x*kk)+(bb*y);
            v.pb(cost3);
                }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
        }
    }

    return 0;
}
