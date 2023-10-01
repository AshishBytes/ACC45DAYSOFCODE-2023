const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let T;
let testCases = [];

rl.question("", (t) => {
  T = parseInt(t);
  readInput();
});

function readInput() {
  if (testCases.length < T) {
    rl.question("", (input) => {
      const [X, Y] = input.split(" ").map(Number);
      testCases.push({ X, Y });
      readInput();
    });
  } else {
    processInput();
  }
}

function processInput() {
  for (let i = 0; i < T; i++) {
    const { X, Y } = testCases[i];
    const extraChairs = Math.max(0, X - Y);
    console.log(extraChairs);
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
