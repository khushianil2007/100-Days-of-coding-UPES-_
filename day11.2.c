Write a program to find profit or loss percentage given cost price and selling price.


#include<stdio.h>
#include<math.h>

int main()
{
    float costPrice, sellingPrice, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice)
    {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit = %.2f%%", percentage);
    }
    else if (costPrice > sellingPrice)
    {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss = %.2f%%", percentage);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
