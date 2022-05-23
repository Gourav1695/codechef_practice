#include <bits/stdc++.h>
using namespace std;

int main(){
    int i=3;
    int*j;

    j=&i;
    printf("\nAddesss of i=%u",&i);
    printf("\nAddesss of i=%u",j);
    printf("\nAddesss of j=%u",&j);

    printf("\nValue of j=%d",j);
    printf("\nValue of i=%d",i);
    printf("\nValue of i=%d",*(&i));
    printf("\nValue of i=%d",*j);
    
    return 0;
}