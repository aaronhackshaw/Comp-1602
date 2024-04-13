bool isPerfectSquare(int n) {
  // Start with the square root of n and iterate down
  // checking if the square of the current number is equal to n.
  int sqrt_n = int(n*0.5);  // Cast to int for integer comparison
  for (int i = sqrt_n; i >= 1; --i) {
    if (i * i == n) {
      return true;
    }
  }
  return false;
}
