#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,d;
        scanf("%d %d %d",&x,&y,&d);
        if ((x-y)<=d)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
    return 0;
}