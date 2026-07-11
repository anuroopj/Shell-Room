

#include <stdio.h>
#include <string.h>


#define MAX_SIZE 10000

int main () {

char input[MAX_SIZE];
int num = 0;
do {

printf("shRoom ~ %% ");
fgets(input, MAX_SIZE, stdin);

for(int i = 0; i < MAX_SIZE; i++){
  if (input[i] == '\n')
  {
    input[i] = '\0';
    break;
  }
  
}

} while ((strcmp(input, "exit")) != 0);

printf("Terminating the program...\n[Process completed]\n");

return 0;

}
