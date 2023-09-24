const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('', (t) => {
    const tests = parseInt(t);
    rl.on('line', (line) => {
        const x = parseInt(line);
        if (x <= 15) {
            console.log('Yes');
        } else {
            console.log('No');
        }
    });
});
