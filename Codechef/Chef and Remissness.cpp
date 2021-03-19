#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int x,y,z;
       cin>>x>>y;
       if(x>y)z=x;
       else z=y;
       cout<<z<<" "<<x+y<<endl;
   }
}
