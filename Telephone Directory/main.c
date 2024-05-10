#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "headher.h"
#include "menu.h"
#include "phoneadd.h"
#include "phonelist.h"
#include "phonesearch.h"

int main()
{
    int choice = 0;
    char nameSearch[20];
    int searchResult = 0;

    menu();

    do{
            printf("\n\nEnter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:  if(phoneAdd() == 0){
                             printf("\nNew person added successfully.");
                         }else{
                             printf("\nAn unexpected error has occurred. Please try again later.");
                         }
                         break;

                case 2:  if(phoneList() == 0){
                             printf("\nListing successful.");
                         }else{
                             printf("\nListing failed. Please try again later.");
                         }
                         break;
                case 3:  printf("Enter the searched name: ");
                         scanf("%s",&nameSearch);
                         searchResult = phoneSearch(nameSearch);
                         if(searchResult == 0){
                             printf("\nSearched name not found.");
                         }else{
                             printf("\n%d Records found.",searchResult);
                         }
                         break;
                case 4:  printf("\nExited.\n");
                         break;
                default: printf("\nChoice a number between 1-4.");

            }
    }while(choice != 4);

    return 0;
}
