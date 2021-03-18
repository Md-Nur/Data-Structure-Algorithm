var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
let A = parseInt(prompt());
let B = parseInt(prompt());
let PROD = A * B;
console.log("PROD = " + PROD);