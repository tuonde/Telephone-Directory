#ifndef PHONELIST_H_INCLUDED
#define PHONELIST_H_INCLUDED

int phoneList(){
    Record currentRecord;
    FILE* fptr;
    fptr = fopen("listdatas.txt","r");
    if(fptr == NULL){
        return -1;
    }
    printf("\n\nName          Lastname            Phone\n");
    printf("----          --------            -----\n");

    while(!feof(fptr)){
        fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        printf("%-14s",currentRecord.name);
        printf("%-20s",currentRecord.lastname);
        printf("%-10s\n",currentRecord.phone);
    }
    fclose(fptr);
    return 0;
}

#endif // PHONELIST_H_INCLUDED
