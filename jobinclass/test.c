#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100][100];
    char name[1][10] = {"SUBMIT"};
    int i = 0, count = 0, total = 0;

    printf("The menu is:\n");
    printf("  porotta: 10\n");
    printf("  biriyani: 100\n");
    printf("  fried rice: 90\n");
    printf("  meals: 50\n");
    printf("  fish fry: 70\n");
    printf("  beaf fry: 100\n");
    printf("Type 'SUBMIT' to finish your order.\n");

    // Take orders
    while (1) {
        scanf("%s", arr[i]);
        if (strcmp(arr[i], name[0]) == 0) {
            break;
        }
        i++;
        count++;
    }

    // Calculate total cost using switch
    for (int j = 0; j < count; j++) {
        int itemcount = -1;

        // Map items to codes
        if (strcmp(arr[j], "porotta") == 0) {
            itemcount = 1;
        } else if (strcmp(arr[j], "biriyani") == 0) {
            itemcount = 2;
        } else if (strcmp(arr[j], "fried rice") == 0) {
            itemcount = 3;
        } else if (strcmp(arr[j], "meals") == 0) {
            itemcount = 4;
        } else if (strcmp(arr[j], "fish fry") == 0) {
            itemcount = 5;
        } else if (strcmp(arr[j], "beaf fry") == 0) {
            itemcount = 6;
        }

        // Switch case to add item costs
        switch (itemcount) {
            case 1:
                total += 10;
                break;
            case 2:
                total += 100;
                break;
            case 3:
                total += 90;
                break;
            case 4:
                total += 50;
                break;
            case 5:
                total += 70;
                break;
            case 6:
                total += 100;
                break;
            default:
                break;
        }
    }

    printf("The total amount is %d\n", total);

    return 0;
}
