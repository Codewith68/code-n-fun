function isprime(n){
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (let i = 2; i <= Math.sqrt(n); i++) {
        if (n % i === 0) return false; // Found a divisor, not prime
    }
    return true; // No divisors found, it's prime
}



console.log(isprime(157)); // true
console.log(isprime(4)); // false