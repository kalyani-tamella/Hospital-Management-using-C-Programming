#include "hospital.h"

void search_patient()
{
    int acc;
    PATIENT *temp = head;

    printf("Enter account number: ");
    scanf("%d", &acc);

    while(temp)
    {
        if(temp->acc_no == acc)
        {
            printf("Found: %s %s %s\n",
                   temp->name, temp->doctor, temp->disease);
            return;
        }
        temp = temp->next;
    }

    printf("Patient not found\n");
}