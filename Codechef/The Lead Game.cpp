#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n=t;
    int a,b,sub1,sub2,mx1,i=0,l=0,m=0,j;
    int ar[n],c[n],d[n];
    while(t--){
        cin>>a>>b;
        if(a>b){
           sub1=a-b;
           ar[i++]=sub1;
        c[l++]=sub1;
        }
        else{
           sub2=b-a;
           ar[i++]=sub2;
           d[m++]=sub2;
        }

        }
        mx1=ar[0];
        for(int k=0;k<n;k++){
            if(ar[k]>=mx1)mx1=ar[k];
        }
         int c_size=sizeof(c)/sizeof(c[0]);
         int d_size=sizeof(d)/sizeof(d[0]);
        for(int x=0;x<c_size;x++){
            if(mx1==c[x])j=1;
        }
        for(int x=0;x<d_size;x++){
            if(mx1==d[x])j=2;
        }

      if(j==1)
        cout<<1<<" "<<mx1<<endl;
     else
        cout<<2<<" "<<mx1<<endl;

}
