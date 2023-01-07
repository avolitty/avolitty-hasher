## About

#### Author
William Parsons <[avolitty.com](https://avolitty.com/)>

#### Description
Create variable-length checksums from all data types with a fast and unique hashing algorithm.

- All data types and values supported
- Browser JavaScript and Node.js support
- Circular object references supported
- Fast hashing speed with collision resistance
- Minified code
- No dependencies
- Optimized for JavaScript UTF-16 code units
- Option to set hash digest length between `0` and `2147483647`
- Option to ignore object key sort order
- Vast difference in hashed output from minor change to input

#### Funding
[Avolitty](https://avolitty.com/donate/)

#### License
[MIT](https://github.com/avolitty/avolitty-hasher/blob/javascript/LICENSE)

#### Usage
Install the NPM module in the current directory with `npm`.

``` console
npm install avolitty-hasher
```

Include the module in Node.js with `require()`.

``` javascript
const avolittyHasher = require("avolitty-hasher")
```

The following example uses code from `test/index.js` to generate hash digests with the `AvolittyHasher()` function from `src/avolitty-hasher.js`.

``` javascript
const a = "🥑"
const b = {
	"outputLength": 128
}
const c = avolittyHasher(a, b)
console.log(c)
```

The first argument `a` is a `boolean`, `function`, `number`, `object`, `string` or `undefined` defined as the message payload to hash.

The second argument `b` is an `object` defined as the following options.

``` json
{
  "ignoreObjectKeySortOrder": true,
  "outputLength": 8
}
```

The optional `ignoreObjectKeySortOrder` data type is `boolean` and the value is `true` to ignore the sort order of object keys.

The default value is `false`.

When `true`, salt is added to avoid collisions from the same object when `false`.

The required `outputLength` data type is `number` and the value is a positive whole number.

The return value is a hexadecimal `string` checksum digest.

The `node` CLI can process a list of defined test inputs from `test/index.js`.

``` console
node test
```

The output is a list of test inputs with corresponding outputs from `avolittyHasher()`.

The values can be compared with the expected output below, excluding the dynamic `global` variable.

``` javascript
Input: avolittyHasher(global, {"outputLength": 8})
Output: "20c83a54"

Input: avolittyHasher("global", {"outputLength": 8})
Output: "54dd196c"

Input: avolittyHasher(global.clearTimeout, {"outputLength": 8})
Output: "4097ee92"

Input: avolittyHasher("global.clearTimeout", {"outputLength": 8})
Output: "e8816253"

Input: avolittyHasher(function() {}, {"outputLength": 8})
Output: "76045d2c"

Input: avolittyHasher("function() {}", {"outputLength": 8})
Output: "92892288"

Input: avolittyHasher(function(a) {}, {"outputLength": 8})
Output: "967f8dcc"

Input: avolittyHasher("function(a) {}", {"outputLength": 8})
Output: "f109ad2f"

Input: avolittyHasher(function(a) {return}, {"outputLength": 8})
Output: "48cf5787"

Input: avolittyHasher("function(a) {return}", {"outputLength": 8})
Output: "e28ee00a"

Input: avolittyHasher(function(a) { return}, {"outputLength": 8})
Output: "41087df8"

Input: avolittyHasher("function(a) { return}", {"outputLength": 8})
Output: "41a229dd"

Input: avolittyHasher({}, {"outputLength": 8})
Output: "22c3f299"

Input: avolittyHasher("{}", {"outputLength": 8})
Output: "89b780a1"

Input: avolittyHasher({"0": 0}, {"outputLength": 8})
Output: "3432b2ac"

Input: avolittyHasher({"0": 1}, {"outputLength": 8})
Output: "586bd3f0"

Input: avolittyHasher([], {"outputLength": 8})
Output: "4fa52f4d"

Input: avolittyHasher("[]", {"outputLength": 8})
Output: "05921abb"

Input: avolittyHasher([0], {"outputLength": 8})
Output: "fb3b2316"

Input: avolittyHasher("[0]", {"outputLength": 8})
Output: "47639828"

Input: avolittyHasher(null, {"outputLength": 8})
Output: "93466dc8"

Input: avolittyHasher("null", {"outputLength": 8})
Output: "229f2295"

Input: avolittyHasher(true, {"outputLength": 8})
Output: "7e744397"

Input: avolittyHasher("true", {"outputLength": 8})
Output: "229f2295"

Input: avolittyHasher(false, {"outputLength": 8})
Output: "c356fbac"

Input: avolittyHasher("false", {"outputLength": 8})
Output: "0d3f42fd"

Input: avolittyHasher(Infinity, {"outputLength": 8})
Output: "a9d97ddf"

Input: avolittyHasher("Infinity", {"outputLength": 8})
Output: "10235f96"

Input: avolittyHasher(-Infinity, {"outputLength": 8})
Output: "6fcf567d"

Input: avolittyHasher(NaN, {"outputLength": 8})
Output: "d59ad07b"

Input: avolittyHasher("NaN", {"outputLength": 8})
Output: "59b7041f"

Input: avolittyHasher(0, {"outputLength": 8})
Output: "9346e1e0"

Input: avolittyHasher("0", {"outputLength": 8})
Output: "c3ca82be"

Input: avolittyHasher("01", {"outputLength": 8})
Output: "0d58c61d"

Input: avolittyHasher(1, {"outputLength": 8})
Output: "b8045fb1"

Input: avolittyHasher("1", {"outputLength": 8})
Output: "e888f080"

Input: avolittyHasher("10", {"outputLength": 8})
Output: "d516b3f7"

Input: avolittyHasher("", {"outputLength": 8})
Output: "2a58c3cd"

Input: avolittyHasher(void 0, {"outputLength": 8})
Output: "25cf5ca4"

Input: avolittyHasher("void 0", {"outputLength": 8})
Output: "b70586cf"

Input: avolittyHasher(undefined, {"outputLength": 8})
Output: "25cf5ca4"

Input: avolittyHasher("undefined", {"outputLength": 8})
Output: "eb0f94a9"

Input: avolittyHasher("🥑", {"outputLength": 8})
Output: "b0c2c9c7"

Input: avolittyHasher("🥑🥑", {"outputLength": 8})
Output: "e043f08b"

Input: avolittyHasher({"3": "🥑", "2": "🥑", "1": "🥑"}, {"ignoreObjectKeySortOrder": false, "outputLength": 8})
Output: "caff895e"

Input: avolittyHasher({"3": "🥑", "2": "🥑", "1": "🥑"}, {"ignoreObjectKeySortOrder": true, "outputLength": 8})
Output: "90656a4a"

Input: avolittyHasher({"1": "🥑", "2": "🥑", "3": "🥑"}, {"ignoreObjectKeySortOrder": true, "outputLength": 8})
Output: "90656a4a"

Input: avolittyHasher("🥑", {"outputLength": 16})
Output: "fe371194822068d1"

Input: avolittyHasher("🥑", {"outputLength": 32})
Output: "7a1241947e7587c812d5b8140eb1f260"

Input: avolittyHasher("🥑", {"outputLength": 64})
Output: "72d8b2b947633a3901b3782351f9202f132e962eae66d4c1f03a6dba11ad1f72"

Input: avolittyHasher("🥑", {"outputLength": 128})
Output: "7254953d646b74c097a12482ae7dc9143008b2b10d50b69013083652a6b7574c377022d020f9a7d270b3c23e366bf818edd5b0005d7e028e89e64dd38e08c397"
