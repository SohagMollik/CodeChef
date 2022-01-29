#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        long long x=a+b;
        long long y=a+c;
        long long z=b+c;
        if(x==y||x==z||y==z)printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
