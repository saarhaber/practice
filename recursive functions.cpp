//factorial, Euclid algo, reverse string, nth fibonacci number, n ^k

int fib(int n) {
  if (n<=1) {
    return n;
  }
  return (fib(n-1) + fib(n-2));
}

int fac(int n) {
  if (n==1 || n==0) {
    return 1;
  }
  return (n*fac(n-1));
}

int gcd(int a, int b){
  if (b==0) {
    return a;
  }
  return gcd (b,a%b);
}

int poww(int n, int k) {
  if (k==1) {
    return n;
  }
  return n*poww(n,k-1);
}
