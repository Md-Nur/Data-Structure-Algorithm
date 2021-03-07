var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let r = 3.14159;
let R =prompt();
let A = r*R*R;
console.log("A="+A);