#include "hospital.h"

PATIENT *head = NULL;

int main()
{
    char ch;

    while(1)
    {
        printf("\n------------------MENU---------------------------\n");
        printf("a/A : Book appointment to visit doctor\n");
        printf("p/P : Print patient details\n");
        printf("s/S : Save all data to file\n");
        printf("f/F : Find/search patient\n");
        printf("m/M : Modify patient details\n");
        printf("x/X : Delete patient\n");
        printf("q/Q : Quit application\n");
        printf("Enter choice: ");

        scanf(" %c", &ch);

        switch(ch)
        {
            case 'a':
            case 'A': create_account(); break;
                 case 'p':
            case 'P': print_menu(); break;

            case 's':
            case 'S': save_data(); break;

            case 'f':
            case 'F': search_patient(); break;

            case 'm':
            case 'M': modify_patient(); break;

            case 'x':
            case 'X': delete_patient(); break;

            case 'q':
            case 'Q': exit(0);

            default: printf("Invalid choice\n");
        }
    }
}