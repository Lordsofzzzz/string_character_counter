# include <stdio.h>
# include <string.h>


int main() { 

char string[100];

int length;

printf("type the string to count:\n");

fgets(string, sizeof(string), stdin);

length = strlen(string) -1;

printf("the no. of characters in string are %d",length);

return 0;



}
