#include <stdio.h>
#include <stdbool.h>

void showActions()
{
    printf("Take an action 1-4: \n");
    printf("1. Add a patient\n");
    printf("2. View a patient\n");
    printf("3. Search patients\n");
    printf("4. Exit\n");
}

int main()
{
    while(true)
    {
        showActions();

        int action;
        scanf("%d", &action);

        bool exit = false;
        switch(action)
        {
            case 1:
                printf("Adding a patient\n");
                break;
            
            case 2:
                printf("Viewing a patient\n");
                break;
            
            case 3:
                printf("Searching for patients\n");
                break;
            
            case 4:
                exit = true;
                break;

            default:
                printf("Please enter a valid action\n");
        }
        if (exit)
        {
            printf("Do you want to save your changes? 1 is yes, 0 is no: ");
            bool save;
            int temp;
            scanf("%d", &temp);
            save = temp;
            if (save) {
                printf("Saving...\n");
            }
            printf("Exiting...\n");
            break;
        }
    }
}