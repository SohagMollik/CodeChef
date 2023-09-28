#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int w,x,y,z;
        scanf("%d%d%d%d",&w,&x,&y,&z);
        int balance=(x*z)-(y*z);
        int ans=w+balance;
        printf("%d\n",ans);
    }
    return 0;
}
