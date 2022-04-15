#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

char z[80], s, *d, *h;
d=z;
h=&z[79];
while (d < h)
 {
 s=*d; *d++ = *h; *h-- = s;
 }
 
 return 0;
}
