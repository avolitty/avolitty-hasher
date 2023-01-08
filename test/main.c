#include <stdio.h>
#include "../src/avolitty-hasher.h"

int main() {
	FILE *a;
	size_t b = 1023;
	size_t c = 1;
	size_t d = b;
	signed short int e[16];
	signed short int f = 16;
	signed short int g = f;
	signed short int h = 0;
	signed short int *i = &g;
	unsigned char j[1023];
	signed char k[16];
	a = fopen("file", "rb");

	while (f-- != 0) {
		e[f] = 254;
	}

	f = --g;

	while (b == d) {
		d = fread(j, c, b, a);
		g = (signed short int) d;
		AvolittyHasherA(e, i, f, g, j);
	}

	fclose(a);
	g = *i;
	AvolittyHasherB(e, g, ++f, k);

	while (f-- != 0) {
		printf("%c", k[f]);
	}

	return 0;
}
