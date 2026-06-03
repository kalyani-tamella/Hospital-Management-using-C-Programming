#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* admission status */
typedef enum
{
    DISCHARGED = 0,
    ADMITTED = 1
} STATUS;

/* patient structure */
typedef struct patient
{
    int acc_no;
    char name[30];
    long contact;
    int room_no;
    STATUS flag;
    char doctor[30];
    char disease[30];
    char join_date[15];
    char discharge_date[15];

    struct patient *next;
} PATIENT;

/* global head pointer */
extern PATIENT *head;

/* function declarations */
void create_account();
void print_menu();
void search_patient();
void modify_patient();
void delete_patient();
void save_data();

#endif