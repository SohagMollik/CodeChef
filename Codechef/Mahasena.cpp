#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int c=0,d=0;
   for(int i=0;i<n;i++){
    if(a[i]%2==0)c++;
    else d++;
   }
   if(c>d)cout<<"READY FOR BATTLE\n";
   else cout<<"NOT READY\n";
}
