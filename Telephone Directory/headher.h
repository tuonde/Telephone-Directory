#ifndef HEADHER_H_INCLUDED
#define HEADHER_H_INCLUDED

typedef struct{
    char name[20];
    char lastname[20];
    char phone[11];
}Record;

void menu();
int phoneAdd();
int phoneList();
int phoneSearch(char*);

#endif // HEADHER_H_INCLUDED
