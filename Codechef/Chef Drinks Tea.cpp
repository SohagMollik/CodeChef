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
    int x,y,z;
    cin>>x>>y>>z;
    if(x<=y)cout<<z<<nn;
    else{
        int ans=x/y;
        if(x%y==0)cout<<ans*z<<nn;
        else cout<<(ans*z)+z<<nn;
    }
    }
    return 0;
}

