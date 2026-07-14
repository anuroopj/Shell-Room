
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000
#define WORD_SIZE 1000

void testPrint(char *s);

int main () {

char input[MAX_SIZE];

char *words[WORD_SIZE];
int wordCount = 0;

do {

printf("shRoom ~ %% ");
fgets(input, MAX_SIZE, stdin);

wordCount = 0;

// loop to iterate through user input
for(int i = 0; i < MAX_SIZE; i++){
  
  if (input[i] == '\n') {
    input[i] = '\0';
    break;
  }

  if(input[i] == ' '){
    input[i] = '\0';
    words[wordCount] = &input[i+1];
    wordCount++;
   }

}

testPrint(words[0]);

} while ((strcmp(input, "exit")) != 0);

printf("Terminating the program...\n[Process completed]\n");

return 0;

}

void testPrint(char *s){
  printf("Prints here: %s\n", s);
}
