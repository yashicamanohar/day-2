
#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("x is greater");
}
else if(x<y)
{
    printf("y is greater");
}
else if(x==y){
    printf("both are equal");
}
}