#include<bits/stdc++.h>
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
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int xx=abs(a[i]-b[i]);
            if(xx==x||xx==y){
                    ans++;
            }
        }
        if(ans==n)cout<<"Yes\n";
        else  cout<<"No\n";
    }

    return 0;
}
