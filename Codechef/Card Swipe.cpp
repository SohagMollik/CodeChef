#include<bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n");
#define no   printf("NO\n");
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i){cin>>a[i];}
        map<int,int>mp;
        int cur=0,ans=0;
        for(int i=0;i<n;++i){
            mp[a[i]]++;
            if(mp[a[i]] % 2==1){
                    ++cur;
            }
            else{
                --cur;
            }
            ans=max(ans,cur);
        }
        cout<<ans<<nn;
    }

    return 0;
}

