#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    double y,z;
    cin>>x>>y;
    z=double(x+0.5);
    if((x%5==0)&&(y>z))cout<<setprecision(2)<<fixed<<double((y-x)-0.5)<<endl;
    //else if((x%5!=0))cout<<setprecision(2)<<fixed<<double(y)<<endl;
    //else if((x%5==0)&&(x>y))cout<<setprecision(2)<<fixed<<double(y)<<endl;
    else cout<<setprecision(2)<<fixed<<double(y)<<endl;

}

