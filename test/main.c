#include <stdio.h>
#include "../src/avolitty-hasher.h"

int main() {
	FILE *a;
	size_t b = 1024;
	size_t c = 1;
	size_t d = b;
	signed short int e[16];
	signed short int f = 16;
	signed short int g = f;
	signed short int h = 0;
	signed short int i = 0;
	signed short int *j = &g;
	signed short int *k = &i;
	unsigned char l[1024];
	signed char m[16];
	a = fopen("file", "rb");

	while (f-- != 0) {
		e[f] = 254;
	}

	f = --g;

	while (b == d) {
		d = fread(l, c, b, a);
		h = (signed short int) d;
		AvolittyHasherA(e, j, k, f, h, l);
	}

	fclose(a);
	AvolittyHasherB(e, g, ++f, m);

	while (f-- != 0) {
		printf("%c", m[f]);
	}

	return 0;
}
