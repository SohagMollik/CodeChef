#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        double a,b,x,y;
        scanf("%ld%ld%ld%ld",&a,&b,&x,&y);
        double aa=a/x;
        double bb=b/y;
        if(aa < bb)printf("Chef\n");
       else if(aa > bb)printf("Chefina\n");
       else printf("Both\n");
    }
    return 0;
}
