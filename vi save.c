#include "hospital.h"

void save_data()
{
    FILE *fp = fopen("data.txt", "w");
    PATIENT *temp = head;

    if(!fp)
    {
        printf("File error\n");
        return;
    }

    while(temp)
    {
        fprintf(fp, "%d %s %ld %d %s %s %s %s %d\n",
                temp->acc_no,
                temp->name,
                temp->contact,
                temp->room_no,
                temp->doctor,
                temp->disease,
                temp->join_date,
                temp->discharge_date,
                temp->flag);

        temp = temp->next;
    }
       fclose(fp);
    printf("Data saved to file\n");
}