## About

#### Description
Create fast 32-bit checksums with a unique hashing algorithm.

#### License
[MIT](https://github.com/avolitty/avolitty-hasher/blob/main/LICENSE)

## Installation

#### Browser
``` console
git clone https://github.com/avolitty/avolitty-hasher.git
```
``` javascript
<script src="avolitty-hasher.js" type="text/javascript"></script>
<script type="text/javascript">console.log(avolittyHasher('🔥'));</script>
```

#### Unix
``` console
cd
npm install avolitty-hasher
```
``` javascript
const avolittyHasher = require("avolitty-hasher");
console.log(avolittyHasher("🔥"));
```

## Usage

#### Details

The module function accepts one argument.

The argument is a `boolean`, `function`, `number`, `object`, `string` or `undefined` message payload to hash.

The return value is a `string` checksum digest from the argument.

#### Tests

``` console
node test

# Input: global
# Output: "4ef376e5"

# Input: "global"
# Output: "1d33f94d"

# Input: global.clearTimeout
# Output: "b09acd0b"

# Input: "global.clearTimeout"
# Output: "bb3e0379"

# Input: function() {} 
# Output: "6bd016c6"

# Input: "function() {}"
# Output: "571b8c6e" 

# Input: function(a) {}
# Output: "1a30599c"

# Input: "function(a) {}" 
# Output: "7232a872"

# Input: function(a) {return}
# Output: "87cecc82"

# Input: "function(a) {return}"
# Output: "9a99e607"

# Input: function(a) { return}
# Output: "6ca57027"

# Input: "function(a) { return}"
# Output: "17632e75"

# Input: {}
# Output: "d785ce73"

# Input: "{}"
# Output: "faf94f16"

# Input: {"0": 0}
# Output: "813dc1b0"

# Input: {"0": 1}
# Output: "b69441e6"

# Input: []
# Output: "9f3fc4e1"

# Input: "[]"
# Output: "7c27292b"

# Input: [0]
# Output: "5c97e6ac"

# Input: "[0]"
# Output: "46a17acc"

# Input: null
# Output: "a62dbd09"

# Input: "null"
# Output: "2fda4b6f"

# Input: true 
# Output: "7757b77e"

# Input: "true"
# Output: "00282633"

# Input: false
# Output: "b732c91b"

# Input: "false"
# Output: "37936028"

# Input: Infinity
# Output: "c2543036"

# Input: "Infinity"
# Output: "b8b120c9"

# Input: -Infinity
# Output: "ac1be099"

# Input: "-Infinity"
# Output: "9c15fe59"

# Input: NaN
# Output: "4ae1d256"

# Input: "NaN"
# Output: "e466b615"

# Input: 0
# Output: "78101015"

# Input: "0"
# Output: "0a474283"

# Input: "01"
# Output: "428a1ac0"

# Input: 1
# Output: "ae5a8f11"

# Input: "1"
# Output: "21e2d0ee"

# Input: "10"
# Output: "5bf0a957"

# Input: ""
# Output: "4e5451a8"

# Input: void 0
# Output: "bf41056f"

# Input: "void 0"
# Output: "a38c9d36"

# Input: undefined
# Output: "bf41056f"

# Input: "undefined"
# Output: "6062746e"
```
