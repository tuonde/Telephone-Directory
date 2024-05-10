#ifndef PHONEADD_H_INCLUDED
#define PHONEADD_H_INCLUDED

int phoneAdd(){
    Record newRecord;
    FILE* fptr;
    fptr = fopen("listdatas.txt","a");
    if(fptr == NULL){
        return -1;
    }
    printf("\n\n");
    printf("Name: ");
    scanf("%s",newRecord.name);
    printf("Lastname: ");
    scanf("%s",newRecord.lastname);
    printf("Phone: ");
    scanf("%s",newRecord.phone);
    fprintf(fptr,"\n%s %s %s",newRecord.name,newRecord.lastname,newRecord.phone);
    fclose(fptr);
    return 0;
}

#endif // PHONEADD_H_INCLUDED
