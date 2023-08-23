#include<stdio.h>

float input_amount()
{
    float amt;

    scanf("%d", &amt);
    return amt;
}

float convert_to_eur( float amt){

    return amt* 0.85;

}

float convert_to_gbp( float amt)
{
    return amt*0.73;

}

int main()
{
    float a;
    a = input_amount();
    int choice;
    printf("Convert to:\n1. EUR\n2. GBP\n");
    printf("Enter your choice ");
    scanf("%d", &choice);

    if( choice == 1)
    {
        printf("%f", convert_to_eur(a));
    }

}
