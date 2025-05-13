
#include <stdio.h>
int main() {
    int tam,eng,maths,sci,soc;
    scanf("%d",&tam);
    scanf("%d",&eng);
    scanf("%d",&maths);
    scanf("%d",&sci);
    scanf("%d",&soc);
    int total=tam+eng+maths+sci+soc;
    printf("Total:%d\n",total);
     float average=total/5;
    printf("Average:%.2f",average);
}
