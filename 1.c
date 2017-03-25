#include <stdio.h>

int main()
{
        printf("Enter your age in years: ");
        int age =0;
        scanf("%d", &age); //enter data     
        age*=365;
        printf("You live about %d days:" , age) ;
        return 0;
}