// it is the code the chunk array
// in javascript

function splitArrayIntoChunks(arr, chunkSize) {
  const result = [];
  for (let i = 0; i < arr.length; i += chunkSize) {
    result.push(arr.slice(i, i + chunkSize));
  }
  return result;
}

const originalArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const chunkSize = 2; // The size of the original array (10) is divisible by 2

const subarrays = splitArrayIntoChunks(originalArray, chunkSize);
console.log(subarrays);
