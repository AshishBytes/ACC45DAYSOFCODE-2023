const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let t;
let testCases = [];

rl.question("", (input) => {
  t = parseInt(input);
  readInput();
});

function readInput() {
  if (testCases.length < t) {
    rl.question("", (input) => {
      const [x, y] = input.split(" ").map(Number);
      testCases.push({ x, y });
      readInput();
    });
  } else {
    processInput();
  }
}

function processInput() {
  for (let i = 0; i < t; i++) {
    const { x, y } = testCases[i];
    if (x >= y) {
      console.log(y);
    } else {
      console.log(x + 2 * (y - x));
    }
  }
  rl.close();
}

/**********************************************************
 * @INFO
 * Code by Ashish Singh
 * @INFO
 * Gmail - ashishlodhi5559@gmail.com
 * @INFO
 * Github - AshishBytes
 * @INFO
 * LinkedIn - ashishbytes
 * @INFO
 * Instagram - @itz_ash._u
 * @INFO
 * Twitter - @itz_ash_u
 * @INFO
 **********************************************************/
