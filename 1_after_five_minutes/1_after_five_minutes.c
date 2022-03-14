#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long a=1,b=1;
    for(int i=0;i<n-2;i++) {
        long long tmp = a+b;
        a=b;
        b=tmp;
    }
    printf("%lld", b);
    return 0;
}