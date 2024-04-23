#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a,b);
    int val = strcmp(a,b);
    
    if(val > 0){
        printf("B smaller");
    }
    else if(val<0){
        printf("A smaller");
    }
    else{
        printf("Same");
    }

    return 0;
}