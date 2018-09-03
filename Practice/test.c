#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned char a = 0xaabbccdd;
  unsigned char b = 0xfffc01ff;
  unsigned char c;

  c = a & b;
  c = c>>8;
  printf("%x Out\n", c);
  return 0;
}
