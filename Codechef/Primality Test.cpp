#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     bool ans=true;
     if(n==1)ans=false;
     else if(n==2)ans=true;
     else{
     for(int i=2;i<sqrt(n)+1;i++){
        if(n%i==0)ans=false;
     }
     }
     if(ans==true)cout<<"yes\n";
     else cout<<"no\n";
    }
    return 0;
}
