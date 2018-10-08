#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *number = (char*)calloc(15,sizeof(char));
    char *check = (char*)calloc(15,sizeof(char));
    fgets(number, 12, stdin);
    number[strcspn(number, "\n")] = '\0';
    int number_int = atoi(number);
    sprintf(check,"%d",number_int);
    if(strcmp(number,check) != 0)
        printf("No");
    else
        printf("Yes");
    return 0;
}
