// Sieve of Eratosthenes is an algorithm for finding all the prime numbers in a segment [1;n] using O(nloglogn) operations.

int n;
vector<char> isPrime(n + 1, true);
isPrime[0] = isPrime[1] = false;
for (int i = 2; i <= n; i++)
{
    if (isPrime[i] && (long long)i * i <= n)
    {
        for (int j = i * i; j <= n; j += i)
            isPrime[j] = false;
    }
}