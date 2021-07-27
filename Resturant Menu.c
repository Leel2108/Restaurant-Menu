#include <stdio.h>

int main()
{
    int choice;
    printf("Menu:\n");
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("Choice: ");
    scanf("%d", &choice);


    switch (choice)
    {
    case 1:
        printf("Food item - Burger Price -Rs 129");
        break;
    case 2:
        printf("Food item - Sandwich Price -Rs 149");
        break;
    case 3:
        printf("Food item - French Fries Price -Rs 99");
        break;
    case 4:
        printf("Food item - Pasta Price -Rs 179");
        break;
    case 5:
        printf("Food item - Pizza Price -Rs 239");
        break;
    default:
        printf("This Food Is Not In Our Menu");
        break;
    }
}
