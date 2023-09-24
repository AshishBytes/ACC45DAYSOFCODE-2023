const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('', (t) => {
    const tests = parseInt(t);
    rl.on('line', (line) => {
        const n = parseInt(line);
        console.log(Math.floor((n + 3) / 4));
    });
});
