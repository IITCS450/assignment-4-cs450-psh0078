#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
  printf(1, "testnull: about to dereference NULL\n");
  volatile int x;
  asm volatile("movl (%%eax), %0" : "=r"(x) : "a"(0) : "memory");
  printf(1, "UNEXPECTED: read=%d\n", x);
  exit();
}
