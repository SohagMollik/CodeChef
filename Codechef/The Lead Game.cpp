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
    int n;
    cin>>n;
    int a[2*n];
    vector<int>ok,ans,temp,vis;
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    int x=0;
    int y=0;
    for(int i=0;i<2*n;i+=2){
        x+=a[i];
        ok.pb(x);
    }
      for(int i=1;i<2*n;i+=2){
        y+=a[i];
        ans.pb(y);
    }
    for(int i=0;i<ok.size();i++){
        if(ok[i]>ans[i]){
            int sub=ok[i]-ans[i];
            temp.pb(sub);
            vis.pb(1);
        }
        else{
            int sub=ans[i]-ok[i];
            temp.pb(sub);
            vis.pb(2);
        }
    }
    int mx=*max_element(temp.begin(),temp.end());
    int index=max_element(temp.begin(),temp.end())-temp.begin();
    cout<<vis[index]<<" "<<mx<<endl;

    return 0;
}
