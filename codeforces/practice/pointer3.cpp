#include <bits/stdc++.h>
using namespace std;

int main(){
    int i=54;
    float a=3.14;
    char*ii ,*aa;
    
    ii=(char*)&i;
    aa=(char*)&a;
    printf("\n Address contained  in ii= %u",ii);
    printf("\nAddress contained in aa =%u",aa);
    printf("\n Value at the  address contained in ii = %d",*ii);
    printf ("\n Value at the address contained in aa = %d",*aa);
    return 0;
}