
# include<stdio.h>
# include<string.h>
// FIND THE NUMBER OF VOWELS IN STRING 

int countvowels(char str[]);

int countvowels(char str []){
    int count = 0;
    for (int i=0;str[i]!='\0';i++){
        if (str[i]=='a'|| str[i]=='e' 
        || str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            count++;
        }
    }
    return count;
}

int main(){
    char str[100];
    printf("Enter the string :");
    scanf("%s",str);
    printf("vowels in the strings are :%d",countvowels(str));
    
    return 0;

}