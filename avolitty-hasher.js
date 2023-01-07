const a = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f"]

const avolittyHasher = function(b, c) {
	let d = []
	let e = " "
	let f = c.outputLength
	let g = 2
	let h = 0
	let i = 0

	if (c._a == void 0) {
		c._a = []

		while (f != h) {
			c._a[h++] = 0
		}
	}

	if (c._b != void 0) {
		e += c._b
	}

	h = -1

	if (typeof b != "string") {
		i = 1

		if (typeof b == "object" && b != null) {
			d = Object.keys(b)

			if (d[0] == void 0) {
				e += b + " "
			} else if (c.ignoreObjectKeySortOrder == true) {
				d = d.sort()
				e += " "
			}

			i = d.length

			while (++h != i) {
				c._b = e

				if (b != b[d[h]]) {
					e = avolittyHasher(b[d[h]], c)
				} else {
					e = avolittyHasher(d[h], c)
				}
			}

			b = e
			i = 1
		}
	}

	if (i == 1) {
		g = (((g >> 1) + g) & 65535) + 56789
		c._a[--i] = g
	}

	b += e
	h = b.length

	while (h-- != 0) {
		g = b.charCodeAt(h) + (((g >> 1) + g) & 65535) + 2

		if (i-- == 0) {
			i = f - 1
		}

		c._a[i] = (c._a[i] + g) & 15
	}

	b = ""

	while (f-- != 0) {
		c._a[f] = g
		g = (c._a[f] + c._a[++h] + (((f + g) >> 1) + g) & 65535) + 2
		c._a[h] = g
		b += a[g & 15]
	}

	return b
}

if (typeof module != 'undefined' && module.exports != void 0) {
	module.exports = avolittyHasher
}
