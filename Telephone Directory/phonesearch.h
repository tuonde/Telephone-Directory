#ifndef PHONESEARCH_H_INCLUDED
#define PHONESEARCH_H_INCLUDED

int phoneSearch(char* ptSearch){
    int i = 0;
    Record currentRecord;
    FILE* fptr;
    fptr = fopen("listdatas.txt","r");
    if(fptr == NULL){
        return -1;
    }
    while(!feof(fptr)){
        fscanf(fptr,"%s%s%s",currentRecord.name,currentRecord.lastname,currentRecord.phone);
        if(!strcmp(ptSearch,currentRecord.name)){
            printf("%s\t\t\t",currentRecord.name);
            printf("%s\t\t\t",currentRecord.lastname);
            printf("%s\n",currentRecord.phone);
            i++;
        }
    }
    fclose(fptr);
    return i;
}

#endif // PHONESEARCH_H_INCLUDED
