#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,x;
        scanf("%d%d%d",&n,&m,&x);
        int ans=((n*2)+(m*2))*x;
        printf("%d\n",ans);
    }
    return 0;
}
