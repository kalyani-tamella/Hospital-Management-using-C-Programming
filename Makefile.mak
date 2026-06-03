a.out: main.o create_account.o print.o search.o modify.o save.o delete.o
        gcc main.o create_account.o print.o search.o modify.o save.o delete.o

main.o: main.c hospital.h
        gcc -c main.c

create_account.o: create_account.c hospital.h
        gcc -c create_account.c

print.o: print.c hospital.h
        gcc -c print.c

search.o: search.c hospital.h
        gcc -c search.c

modify.o: modify.c hospital.h
        gcc -c modify.c

save.o: save.c hospital.h
        gcc -c save.c

delete.o: delete.c hospital.h
        gcc -c delete.c