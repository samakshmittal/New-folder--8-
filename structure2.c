#include<stdio.h>
void display();
union Product
{
    char pname[100];
    float  per_unit;
    int quant;
    float amount;
};
union Product obj ;
union Product *ptr=&obj;
int main()
{
    int a,b;
    printf("Enter the product name\n");
    scanf("%s",ptr->pname );
    printf("Product name  is =%s\n" ,ptr->pname);
    printf("Enter the price per unit\n");
    scanf("%f",&ptr->per_unit);
    a=ptr->per_unit;
    printf("Price per unit =%.3f\n",ptr->per_unit);
    printf("Enter the number of quantities\n");
    scanf("%d",&ptr->quant);
    b=ptr->quant;
    printf("Number of Quantities= %d\n",ptr->quant );
    ptr->amount=a*b;
    printf("Amount spend =%.3f\n",ptr->amount);
    return 0;
}