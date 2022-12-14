## About

#### Contributor
[William Parsons](avolitty@gmail.com)

#### Description
Create variable-length checksums from all data types with a fast and unique hashing algorithm.

- All data types and values supported
- Browser and Node.js support
- Circular object references supported
- Fast hashing speed with collision resistance
- Minified code
- No dependencies
- Optimized for JavaScript UTF-16 code units
- Option to set hash digest length between `0` and `2147483647`
- Option to ignore object key sort order
- Vast difference in hashed output from minor change to input

#### Funding
[Patreon](https://www.patreon.com/avolitty)

#### License
[MIT](https://github.com/avolitty/avolitty-hasher/blob/main/LICENSE)

## Installation

#### Browser

[JSFiddle](https://jsfiddle.net/avolitty/g1d3eL7b/latest/)

``` console
git clone https://github.com/avolitty/avolitty-hasher.git
```

``` javascript
<script src="avolitty-hasher.js" type="text/javascript"></script>
```

#### Node.js

[NPM](https://www.npmjs.com/package/avolitty-hasher)

``` console
npm install avolitty-hasher
```

``` javascript
const avolittyHasher = require("avolitty-hasher")
```

## Usage

#### Details

The module function accepts two arguments.

The first argument data type is `boolean`, `function`, `number`, `object`, `string` or `undefined` and the value is a message payload to hash.

The second argument data type is `object` with the following options.

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

#### Tests

``` console
node test
```

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

Input: avolittyHasher("🔥", {"outputLength": 8})
Output: "3c210f35"

Input: avolittyHasher("🔥🔥", {"outputLength": 8})
Output: "f2121735"

Input: avolittyHasher({"3": "🔥", "2": "🔥", "1": "🔥"}, {"ignoreObjectKeySortOrder": false, "outputLength": 8})
Output: "b7698e8d"

Input: avolittyHasher({"3": "🔥", "2": "🔥", "1": "🔥"}, {"ignoreObjectKeySortOrder": true, "outputLength": 8})
Output: "3d9c2d6f"

Input: avolittyHasher({"1": "🔥", "2": "🔥", "3": "🔥"}, {"ignoreObjectKeySortOrder": true, "outputLength": 8})
Output: "3d9c2d6f"

Input: avolittyHasher("🔥", {"outputLength": 16})
Output: "7a96eaf3415634b1"

Input: avolittyHasher("🔥", {"outputLength": 32})
Output: "f6712c40d5920b69630a920e4b227a23"

Input: avolittyHasher("🔥", {"outputLength": 64})
Output: "fe379d77fa58f02738c6ea777e7dc998617651817869e64bfe2dd10ddaee1310"

Input: avolittyHasher("🔥", {"outputLength": 128})
Output: "feb370e9cb88f8614300fccc3ca58f86855c5365aef1e698d971a8a7fadc1d393d217222478150f7cdf651b625e38c0854a687b5e458fb28b496edba47dfcff3"
