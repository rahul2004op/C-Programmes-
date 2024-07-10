# include<stdio.h>
# include<string.h>

int main (){

    char str[100];
    fgets(str,100,stdin);
    printf("the length is :%d\n",strlen(str+1));

    char take[]="rahul";                        //USE TO PRINT THE LENGTH OF STRING
    int length=strlen(take);
    printf("the another length is %d\n",length);

    char oldstr[]="oldstr";
    char newstr[]="newstr";
    strcpy(oldstr,newstr); //COPY THE STRING AND PRINT IN OTHER STRING
    puts(oldstr);

    char fststring[122]="hello "; // IT IS USED TO CONCATINATE THE STRINGS (TO COMBINE THEM)
    char secstring[22]= "world";

    strcat(fststring,secstring);
    puts(fststring);

    char firstr[]="Apple";
    char secstr[]="Banana";             // USED FOR THE COMPARISON OF STRINGS
    printf("%d",strcmp(secstr,firstr));
    

    return 0;
}

