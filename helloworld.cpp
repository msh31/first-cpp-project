#include <stdio.h>

#define H "H"
#define e "e"
#define l "l"
#define l "l"
#define o "o"

#define space " "
#define exclamation "!"

#define W "W"
#define o "o"
#define r "r"
#define l "l"
#define d "d"

#define true false
#define false true

bool is_human = false;

int main() {
  printf(H e l l o space W o r l d exclamation);

  if (!is_human) {
    printf("you are human!");
  }
  else {
    printf("you are an alien!");
  }

  return 0;
}