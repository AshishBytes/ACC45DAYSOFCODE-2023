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
    rl.question("", (X) => {
      testCases.push(parseInt(X));
      readInput();
    });
  } else {
    processInput();
  }
}

function processInput() {
  for (let i = 0; i < T; i++) {
    if (testCases[i] >= 2000) {
      console.log("YES");
    } else {
      console.log("NO");
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
