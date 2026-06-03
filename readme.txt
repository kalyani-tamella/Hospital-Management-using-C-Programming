Hospital Management System
==========================

Project Description:
--------------------
This project is a menu-driven Hospital Management System developed in C.
It is used to manage patient accounts, doctor details, and appointments.
The project uses structures, structure pointers, singly linked list, file handling,
and modular programming.

Features:
---------
1. Create patient account and book appointment
2. Prevent duplicate account numbers
3. Allow same patient to visit again as a new record
4. Print patient details (all, specific patient, doctor-wise, disease-wise)
5. Search patient by account number
6. Modify patient details
7. Delete patient records
8. Save all data permanently to a file
9. Menu-driven user interface

Files Used:
-----------
main.c              : Main menu and program flow
hospital.h          : Structure, enum, and function declarations
create_account.c    : Create patient account / book appointment
print.c             : Print patient details
search.c            : Search patient records
modify.c            : Modify patient details
delete.c            : Delete patient records
save.c              : Save data to file
Makefile            : Build and compilation instructions
data.txt            : File to store patient data

How to Compile:
---------------
Open terminal inside the project folder and type:

    make

This will compile all source files and generate the executable a.out.

How to Run:
-----------
After compilation, run the program using:

    ./a.out

How to Use the Application:
---------------------------
When the program runs, a menu is displayed.

a/A : Book appointment to visit doctor
p/P : Print patient details (sub-menu available)
s/S : Save all data to file
f/F : Find/search patient
m/M : Modify patient or account details
x/X : Delete patient or account
q/Q : Quit the application

Follow the on-screen instructions to enter data.

Build Clean:
------------
To remove object files and executable, use:

    make clean

This project is implemented as per lab requirements using
structure pointers, singly linked list, file handling, and Makefile.
                                       