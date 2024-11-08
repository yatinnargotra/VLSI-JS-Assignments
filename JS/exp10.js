function multiplicationTableFor(number) {
  console.log(`Multiplication Table for ${number} (using for loop):`);
  for (let i = 1; i <= 10; i++) {
    console.log(`${number} x ${i} = ${number * i}`);
  }
}

function multiplicationTableWhile(number) {
  console.log(`Multiplication Table for ${number} (using while loop):`);
  let i = 1;
  while (i <= 10) {
    console.log(`${number} x ${i} = ${number * i}`);
    i++;
  }
}

function multiplicationTableDoWhile(number) {
  console.log(`Multiplication Table for ${number} (using do-while loop):`);
  let i = 1;
  do {
    console.log(`${number} x ${i} = ${number * i}`);
    i++;
  } while (i <= 10);
}

function generateMultiplicationTable(loopType, number) {
  switch (loopType) {
    case "for":
      multiplicationTableFor(number);
      break;
    case "while":
      multiplicationTableWhile(number);
      break;
    case "do-while":
      multiplicationTableDoWhile(number);
      break;
    default:
      console.log(
        "Please provide a valid loop type: 'for', 'while', or 'do-while'."
      );
  }
}

const args = process.argv.slice(2);
const loopType = args[0];
const number = parseInt(args[1]);

if (isNaN(number)) {
  console.log("Please provide a valid number as input.");
} else if (!loopType) {
  console.log("Please provide the loop type: 'for', 'while', or 'do-while'.");
} else {
  generateMultiplicationTable(loopType, number);
}
