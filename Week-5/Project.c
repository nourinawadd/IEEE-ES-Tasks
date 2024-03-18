#include <stdio.h>
int main(){
    char itemName[1000][1000];
    char receipt[1000];
    float price[1000];
    int br = 0;
    int item = 0;
    int shipping = 0;
    float total = 0;
    float sum = 0;
    int itemCheck, shippingCheck;
    printf("\tWelcome to Nourin's Online Store!\n");

    while(br != 1){
        // entering item name into 2d array
        printf("Enter item number %d: \n", item+1);
        scanf("%s", &itemName[item]);

        // entering item price
        printf("Enter price: \n");
        scanf("%f", &price[item]);

        // checking each item's price for shipping costs
        if(price[item] < 10){
            shipping += 2;
        }
        else{
            shipping += 3;
        }
        item++;

        // asking for overnight shipping
        printf("Would you like overnight shipping for +$5? (1 for yes, 0 for no): \n");
        scanf("%d", &shippingCheck);

        if(shippingCheck == 1){
            shipping += 5;
        }

        // giving the user the option to continue or stop order.
        printf("Would you like to add another item? (1 for yes, 0 for no): \n");
        scanf("%d", &itemCheck);

        // if they wish to stop
        if(itemCheck == 0){
            if(item < 2){
                printf("Minimum of 2 items required for one order.\n");
            }
            else{
                br = 1; // break the loop to print the receipt
            }
        }

        // if they wish to continue
        else if(itemCheck == 1){
                continue;
        }

        // invalid number input
        else{
            printf("Please enter 1 or 0.\n");
        }
    }
    // adding all the items' price.
    for(int i=0; i<item; i++){
        sum += price[i];
    }

    // adding shipping costs
    total = sum + shipping;

    // checking for discounts (over 5 items)
    if(item > 5){
            total *= 0.8;
    }

    // receipt
    printf("Items: %d\n", item);
    printf("Total cost: $%.2f\n", sum);
    printf("Shipping costs: $%d\n", shipping);
    printf("TOTAL: $%.2f\n", total);

}
