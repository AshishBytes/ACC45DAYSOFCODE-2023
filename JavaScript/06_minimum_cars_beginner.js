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

/**********************************************************
 * @INFO
 * Code by Ashish Singh
 * @INFO
 * Github - AshishBytes
 * @INFO
 * Gmail - ashishlodhi5559@gmail.com
 * @INFO
 * Instagram - @itz_ash._u
 * @INFO
 * Twitter - @itz_ash_u
 * @INFO
 **********************************************************/
