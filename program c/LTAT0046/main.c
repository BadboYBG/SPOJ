#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned long long gcd(unsigned long long a, unsigned long long b){
    while(b!=0){
        unsigned long long tam = a%b;
        a=b;
        b=tam;
    }
    return a;
}
int main()
{
    unsigned long long a, b, UCLN, tam;
    scanf("%llu%llu",&a,&b);
    if(a==0&&b==0)
    	printf("0");
    else if(a==0||b==0)
        	printf("N/A");
	    else{
	        UCLN=gcd(a,b);
	        tam = a/UCLN;
	        if((ULLONG_MAX/tam) >= b)
	            printf("%llu",(tam*b));
	        else
	            printf("N/A");
	    }
    return 0;
}
