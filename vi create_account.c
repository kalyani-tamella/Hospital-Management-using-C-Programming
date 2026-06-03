#include "hospital.h"

void create_account()
{
    PATIENT *new = malloc(sizeof(PATIENT));
    PATIENT *temp = head;

    printf("Account Number: ");
    scanf("%d", &new->acc_no);

    while(temp)
    {
        if(temp->acc_no == new->acc_no)
        {
            printf("Existing account found. Adding new visit.\n");
            break;
        }
        temp = temp->next;
    }

    printf("Patient Name: ");
    scanf("%s", new->name);

    printf("Contact Number: ");
    scanf("%ld", &new->contact);

    printf("Room Number: ");
    scanf("%d", &new->room_no);
    printf("Doctor Name: ");
    scanf("%s", new->doctor);

    printf("Disease Name: ");
    scanf("%s", new->disease);

    printf("Joining Date: ");
    scanf("%s", new->join_date);

    printf("Discharge Date: ");
    scanf("%s", new->discharge_date);

    new->flag = ADMITTED;

    new->next = head;
    head = new;

    printf("Account / Appointment added successfully\n");
}