//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int ar[n], b[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int sum = 0; 
    for(int i=n-1; i>=0; i--){
        b[i]=ar[i];
    }
    for(int j=1; j<=k; j++){
        sum = sum + b[j];
    }
    printf("%d", sum);
    return 0;
}