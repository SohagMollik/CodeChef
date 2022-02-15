#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int x,c=0,n=0;
         string s;
         cin>>x>>s;
         for(int i=0;i<s.size();i++)
         {
             if(s[i]=='C')c++;
             else if(s[i]=='N')n++;
         }
         if(c>n)cout<<60*x<<"\n";
         else if(c==n)cout<<55*x<<"\n";
         else cout<<40*x<<"\n";
     }

    return 0;
}
