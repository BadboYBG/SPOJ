#include <stdio.h>
#include <limits.h>
int main()
{

//    char *hex_string = "0xFFFFFFFF";
//    unsigned int max = (int)strtol(hex_string, NULL, 16);
//    unsigned int a, b;
//    printf("%d\n",max);
//    scanf("%d%d",&a,&b);
//    int check = a + b;
//    if(check < a || check < b){
//        printf("No");
//        return;
//    }
//    Bound Checking for a Sum
//    int check2 = max - a - b;
//    if (check2 > 0)
//        printf("Yes");
//    else
//        printf("No");


//    Bound Checking for a Product
//    unsigned int c;
//    if(a>b){
//        c=b;
//        b=a;
//        a=c;
//    }
//    for(int i = 0; i < a; i++){
//        max = max - b;
//        if(max<0){
//            printf("No");
//            return;
//        }
//    }
//    printf("Yes");

//  Bound Checking for a Signed Sum
    char *hex_duong = "0xFFFFFFFF";
    int max_duong = (int)strtol(hex_duong, NULL, 16);
    int min_am = -max_duong - 1;
    int a, b;
//    scanf("%d%d",&a,&b);
//    long long tong = a + b;
//    if(tong < min_am || tong > max_duong)
//        printf("No");
//    else
//        printf("Yes");
    printf("%d\n",max_duong);
    while(scanf("%d",&a)!=1){
        printf("xin");
    }
    return 0;
}
