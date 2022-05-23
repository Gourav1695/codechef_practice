#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 3;
    int *j;
    int **k;
    j=&i;
    k = &j;
    printf("\nAddess of i=%u", &i);
    printf("\nAddess of i=%u", j);
    printf("\nAddess of i=%u", *k);
    printf("\nAddess of j=%u", &j);
    printf("\nAddess of j=%u", k);
    printf("\nAddess of k=%u", &k);

    printf("\n Value of j=%u", j);
    printf("\n Value of k=%u", k);
    printf("\n Value of i=%u", i);
    printf("\n Value of i=%u", *(&i));
    printf("\n Value of i=%u", *j);
    printf("\n Value of i=%u", **k);

    return 0;
}