#include <stdio.h>
#include <string.h>
// the keyword strcmp is from the library string.h it is used to compar the word inputed and the word "quit"
// if the are equal it returns 0 if not anyother number is given

int main(void){

    char word[200];
    while(strcmp(word, "quit") != 0){
        printf("Enter a word (use the keyword quit to exit the loop): ");
        scanf("%s", word);
        printf("word: %s \n", word);
    }

    return 0;

}

