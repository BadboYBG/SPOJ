#include <stdio.h>
#include <limits.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0||b==0){
        printf("Yes");
    }else
        if((a>0 && b>0)||(a<0 && b<0)){
            if(a>0&&b>0){
                if((INT_MAX)/a >= b)
                    printf("Yes");
                else
                    printf("No");
            }else{
                if((INT_MAX)/a <= b)
                    printf("Yes");
                else
                    printf("No");
            }

        }else
            if(a<0 || b < 0){
                    if(a<0){
                        int c=b;b=a;a=c;
                    }
                    if((INT_MIN/a) <= b)
                        printf("Yes");
                    else
                        printf("No");
            }
    return 0;
}
