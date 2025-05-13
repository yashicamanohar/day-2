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
    if (average>=90)
    {
        printf("o");
    }
    else if(average>=80)
    {
        printf("\nA");
    }
        else if(average>=70)
        {

            printf("\nB");
        }
        else if(average>=60)
        {
            printf("\nC");
        }
    else if(average>=50)
    {
        printf("\nD");
    }
    else if(average>=40)
    {
        printf("\ntry better next time");
    }
    
}