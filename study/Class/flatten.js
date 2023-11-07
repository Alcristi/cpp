let array = [1, [2, [3, [4]], 5]];

function flattenArray(array) {
  return array.reduce((total, current) => {
    if (Array.isArray(current)) return [...total, ...flattenArray(current)];
    return [...total, current];
  }, []);
}

console.log(flattenArray(array));
