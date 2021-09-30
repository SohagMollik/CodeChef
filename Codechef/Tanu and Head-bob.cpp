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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int z=0,y=0,x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='N')z++;
            else if(s[i]=='Y')y++;
           else if(s[i]=='I')x++;
        }
        if(x>=1)cout<<"INDIAN\n";
        else if(z>=1&&y==0)cout<<"NOT SURE\n";
        else cout<<"NOT INDIAN\n";
    }

    return 0;
}
