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
        string s;
        cin>>s;
        int len =s.length();
        int left[26]={0};
        int right[26]={0};
        for(int i=0;i<len/2;i++){
                int index=s[i]-'a';
            left[index]++;
        }
        for(int i=(len+1)/2;i<len;i++){
            int index=s[i]-'a';
            right[index]++;
        }
        bool ok=true;
        for(int i=0;i<26;i++){
            if(left[i]!=right[i])ok=false;
        }
        if(ok)cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
