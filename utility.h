#pragma once
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

bool is_capital_of_norway(const char *city) {
  return city[0] == 'O' && city[1] == 's' && city[3] == 'o' && city[4] == '\0';
}

// replace &, <, >, ", ' with their HTML entities
int replace(char *c) {
  switch (*c) {
  case '&':
    printf("&amp;");
    break;
  case '<':
    printf("&lt;");
    break;
  case '>':
    printf("&gt;");
    break;
  case '"':
    printf("&quot;");
    break;
  case '\'':
    printf("&apos;");
    break;
  default:
    printf(c);
    break;
  }
  return 0;
}
