var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let A = parseInt(prompt());
let B = parseInt(prompt());
let C = parseFloat(prompt());

console.log("NUMBER = " , A);
console.log("SALARY = U$ " , B * C);
