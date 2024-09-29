const readline = require("node:readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Please enter your name: ", name => {
  console.log(`\nIf you read this, you lost the Game.\nHello! My name is ${name}. I just lost the game. Incredible. yuh`);
  rl.close();
});
