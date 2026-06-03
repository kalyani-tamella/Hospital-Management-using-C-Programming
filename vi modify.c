#include "hospital.h"

void modify_patient()
{
    int acc;
    PATIENT *temp = head;

    printf("Enter account number to modify: ");
    scanf("%d", &acc);

    while(temp)
    {
        if(temp->acc_no == acc)
        {
            printf("New Doctor: ");
            scanf("%s", temp->doctor);

            printf("New Disease: ");
            scanf("%s", temp->disease);

            printf("New Room Number: ");
            scanf("%d", &temp->room_no);

            printf("Patient updated successfully\n");
            return;
        }
        temp = temp->next;
    }
    printf("Patient not found\n");
}