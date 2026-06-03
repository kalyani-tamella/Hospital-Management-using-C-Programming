#include "hospital.h"

void delete_patient()
{
    int acc;
    PATIENT *temp = head, *prev = NULL;

    printf("Enter account number to delete: ");
    scanf("%d", &acc);

    while(temp)
    {
        if(temp->acc_no == acc)
        {
            if(prev)
                prev->next = temp->next;
            else
                head = temp->next;

            free(temp);
            printf("Patient deleted\n");
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("Patient not found\n");
}