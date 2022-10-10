#include "utility.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char input[20] = {0};
  char *newStr = "";


  fgets(input, 20, stdin);
  int count = 0;

  for (size_t i = 0; i < sizeof(input); i++) {
    // printf("%c", input[(int)i]);
    // printf("\n");
    if (input[(int)i] != NULL) {
      count++;
    }
  }

  // printf("%d", count - 1);

  char inputFixed[count - 1];
  for (size_t i = 0; i < sizeof(inputFixed); i++) {
    inputFixed[(int)i] = input[(int)i];
  }

  // printf("%s", inputFixed);
  // printf("\n");

  newStr = replace(inputFixed[0]);
  for (size_t i = 0; i < sizeof(inputFixed); i++) {
    char *inbetweenString;
    inbetweenString = malloc(strlen(newStr) + (int)sizeof(replace(inputFixed[i])));
    strcpy(inbetweenString, newStr);

    strcat(inbetweenString, replace(inputFixed[i]));

    newStr = inbetweenString;
  }

  int result3 = strcmp(replace('&'), "&amp;");

  printf("%d", result3);
  return 0;
}
