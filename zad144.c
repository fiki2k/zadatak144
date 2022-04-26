// Program treba zamjenit vrijednosti brojeva pomocu pointera.

#include<stdio.h>

void zamjena(int *a,int *b,int *c);

int main()
{
    int a, b, c;

    printf("Unesi a : ");
    scanf("%d",&a);
    printf("\nUnesi b : ");
    scanf("%d",&b);
    printf("\nUnesi c : ");
    scanf("%d",&c);

    printf("\nVrijednosti prije zamjene: \n");
    printf("\ta = %d\tb = %d\tc = %d\n",a,b,c);

    zamjena(&a, &b, &c);

    printf("\nVrijednosti nakon zamjene: \n");
    printf("\ta = %d\tb = %d\tc = %d\n",a,b,c);

    return 0;
}
void zamjena(int *a,int *b,int *c)
{

    int temp;

    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
