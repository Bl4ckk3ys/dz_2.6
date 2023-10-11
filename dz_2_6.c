#include <stdio.h>

int main()
{   
    int a, b, c, d, max, min, id, null;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a !=b && a!=c) printf("1");
    else if(b != a && b!=c) printf("2");
    else if(c != a && c!=a) printf("3");
    else printf("4");

    scanf("\n%d",&null);
    return 0;
}