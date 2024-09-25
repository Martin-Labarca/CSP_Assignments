#include <stdio.h>
float income, rent, utilities, groceries, transportation, savings, expenses, spend;

void percent(char type[], int amount){
    int per = amount/income *100;

    printf("Your %s is %d%% of your income.\n", type, per);
}


int main(void){
    printf("This is a budger calculator.\n How much do you make a month?\n");
    scanf("%f", &income);
    printf("How much your rent cost?\n");
    scanf("%f", &rent);
    printf("How much your utilities cost?\n");
    scanf("%f", &utilities);
    printf("How much do your grocieries cost?\n");
    scanf("%f", &groceries);
    printf("How much your transportation cost?\n");
    scanf("%f", &transportation);
    savings = income * .2; 
    expenses = rent + utilities + groceries + transportation;
    spend = income - expenses - savings;
    printf("You make $%.2f\n", income);
    printf("Your expenses are $%.2f\n", expenses);
    printf("Your savings are $%.2f\n", savings);
    printf("Your spending money is $%.2f\n", spend);

    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("expenses", expenses);
    percent("savings", savings);
    percent("spending", spend);

    return 0;
}