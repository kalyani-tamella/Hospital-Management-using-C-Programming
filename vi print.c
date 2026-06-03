#include "hospital.h"

void print_menu()
{
    int ch;
    char key[30];
    PATIENT *temp = head;

    if(!temp)
    {
        printf("No records available\n");
        return;
    }

    printf("\n1. Print all patients\n");
    printf("2. Print specific patient\n");
    printf("3. Print doctor wise patients\n");
    printf("4. Print disease wise patients\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            while(temp)
            {
                printf("\n%d %s %s %s %d %ld",
                       temp->acc_no, temp->name,
                       temp->doctor, temp->disease,
                       temp->room_no, temp->contact);
                temp = temp->next;
            }
            break;

        case 2:
            printf("Enter patient name: ");
            scanf("%s", key);
            while(temp)
            {
                if(strcmp(temp->name, key) == 0)
                    printf("\n%d %s %s %s",
                           temp->acc_no, temp->name,
                           temp->doctor, temp->disease);
                temp = temp->next;
            }
            break;

        case 3:
            printf("Enter doctor name: ");
            scanf("%s", key);
            while(temp)
            {
                if(strcmp(temp->doctor, key) == 0)
                    printf("\n%s %s", temp->name, temp->disease);
                temp = temp->next;
            }
              break;

        case 4:
            printf("Enter disease name: ");
            scanf("%s", key);
            while(temp)
            {
                if(strcmp(temp->disease, key) == 0)
                    printf("\n%s %s", temp->name, temp->doctor);
                temp = temp->next;
            }
            break;

        default:
            printf("Invalid option\n");
    }
}
