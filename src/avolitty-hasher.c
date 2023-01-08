void AvolittyHasherA(signed short int *a, signed short int *b, signed short int c, signed short int d, unsigned char *e) {
	signed short int f = *b + 2;
	signed short int g = 0;
	signed short int h = 0;

	while (d != g) {
		f = (signed short int) e[g] + (((f >> 1) + f) & 8191) + 2;
		h = g++ & c;
		a[h] = (a[h] + f) & 1023;
	}

	*b = f;
	return;
}

void AvolittyHasherB(signed short int *a, signed short int b, signed short int c, signed char *d) {
	signed short int e = 0;
	const signed char f[16] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102};

	while (c-- != 0) {
		a[c] = b;
		b = (a[c] + a[e] + (((b + c) >> 1) + c) & 8191) + 2;
		a[e++] = b;
		d[c] = f[b & 15];
	}

	return;
}
