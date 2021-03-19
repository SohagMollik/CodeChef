#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
       int ok[3];
       for(int i=0;i<3;i++){
        cin>>ok[i];
       }
       sort(ok,ok+3,greater<int>());
       cout<<ok[1]<<endl;

   }
   return 0;
}
