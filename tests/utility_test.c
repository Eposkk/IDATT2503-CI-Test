#include "utility.h"
#include <assert.h>
#include <string.h>

int main() {
  assert(is_capital_of_norway("") == false);

  assert(is_capital_of_norway("Trondheim") == false);

  assert(is_capital_of_norway("Oslo") == true);

  assert(is_capital_of_norway("Oslofjorden") == false);
}
