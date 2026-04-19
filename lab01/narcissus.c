#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    a=d/100;
    b=d%100/10;
    c=d%10;
    if(d== a*a*a+b*b*b+c*c*c){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;

}
