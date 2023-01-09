void AvolittyHasherA(signed short int *a, signed short int *b, signed short int *c, signed short int d, signed short int e, unsigned char *f) {
	signed short int g = *b;
	signed short int h = *c;
	signed short int i = 0;
	signed short int j = 0;

	while (e != i) {
		g = (signed short int) f[i++] + ((((g + 2) >> 1) + g) & 8191) + 2;
		j = h++ & d;
		a[j] = (a[j] + g) & 1023;
	}

	*b = g;
	*c = h;
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
