#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

   while(t--){
    int n;
    cin>>n;
    vector<int>v;
    v.push_back(1);
    int carry=0;
    for(int i=2;i<=n;i++){
        for(int j=0;j<v.size();j++){
            int temp=v[j]*i;
            v[j]=(temp+carry)%10;
            carry=(temp+carry)/10;
        }
        while(carry!=0){
            v.push_back(carry%10);
            carry/=10;
        }
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    cout<<endl;
   }
}
