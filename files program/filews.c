gdhghhgghfg#include<stdio.h>
void user_input();
struct gujarati_dish
{
    char name[20];
    int price;
    int qty;
    int total;
}g1;

int main()
{
    FILE *f1=fopen("Gujarati_dish.txt","a");
    user_input();
    g1.total=g1.price*g1.qty;
    fprintf(f1,"%s  %d  %d  %d",g1.name,g1.qty,g1.price,g1.total);
    fclose(f1);
}
void user_input()
{
    char ch;
    do{
        getchar();
        printf("\nEnter the name of dish: ");
        gets(g1.name);
        printf("\nEnter quantity of dish: ");
        scanf("%d",&g1.qty);
        printf("\nEnter price of per plate: ");
        scanf("%d",&g1.price);
        getchar();
        printf("\nDo you want to continue (y/n): ");
        scanf("%c",&ch);
    }while(ch=='y'||ch=='Y');
}
