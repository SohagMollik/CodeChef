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
      int n;
      cin>>n;
      if(n<6)cout<<0<<endl;
      else{
      int rem=n-6;
      cout<<rem/7+1<<endl;
      }
    }

    return 0;
}
