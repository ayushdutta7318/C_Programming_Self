/*challenge*/

#include <stdio.h>
#include <stdlib.h>

//1.
struct Item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

//2.
void readItem(struct Item *read){
    //3.user i/p
    printf("Enter the name of item: \n");
    scanf("%s", read->itemName);
    printf("Enter the quantity of item: \n");
    scanf("%d", &read->quantity);
    printf("Enter the price of item: \n");
    scanf("%f", &read->price);

    read->amount = read->price * read->quantity;
}

//3. print items
void printItem(struct Item *pr){
    printf("The itemName: %s, item quantity: %d, item price: %.2f, item amount: %.2f\n", pr->itemName, pr->quantity, pr->price, pr->amount);
}

int main(void){
    //4. memory allocation
    struct Item *grocery = malloc(sizeof(struct Item));
    grocery->itemName = (char *)malloc(50*sizeof(char));

    //5. read and write 
    readItem(grocery);
    printItem(grocery);

    //5. free memory
    free(grocery->itemName);
    free(grocery);
    
    return 0;
}