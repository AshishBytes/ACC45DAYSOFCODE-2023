const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let T;
let testCases = [];

rl.question('', (t) => {
    T = parseInt(t);
    readInput();
});

function readInput() {
    if (testCases.length < T) {
        rl.question('', (input) => {
            const [X, Y, Z] = input.split(' ').map(Number);
            testCases.push({ X, Y, Z });
            readInput();
        });
    } else {
        processInput();
    }
}

function processInput() {
    for (let i = 0; i < T; i++) {
        const { X, Y, Z } = testCases[i];
        const totalRupees = X * 5 + Y * 10;
        const maxChocolates = Math.floor(totalRupees / Z);
        console.log(maxChocolates);
    }
    rl.close();
}
