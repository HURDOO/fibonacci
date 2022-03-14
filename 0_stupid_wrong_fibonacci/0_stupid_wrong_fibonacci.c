#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    long long a=1,b=1;
    long long sum=0;
    for(int i=0;i<n-2;i++) {
        int tmp = a+b;
        sum += tmp;
        a=b;
        b=tmp;
    }
    printf("%lld", sum);
    return 0;
}