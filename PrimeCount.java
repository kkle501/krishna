// Count the number of prime numbers less than a non-negative number, n.
import java.io.*;
import java.util.*;

class PrimeCount{


static boolean isPrime(int num)// Function to check if a number is prime or not
{
	if (num <= 1)
		return false;

	for(int i = 2; i * i <= num; i++)
	
		if (num % i == 0)// If a divisor of n exists
			return false;
			
	return true;
}


static boolean isFulPrime(int n)// Function to check if a number is Full Prime or not
{
	
	
	if (!isPrime(n))// If n is not a prime
		return false;

	else
	{
		while (n > 0)
		{
			
			// Extract digit
			int rem = n % 10;
			
			// If any digit of n
			// is non-prime
			if (!(rem == 2 || rem == 3 ||
				rem == 5 || rem == 7))
				return false;

			n = n / 10;
		}
	}
	return true;
}

static int countFulPrime(int L, int R)// Function to print count of Full Primes in a range [L, R]
{
	
	int cnt = 0;// Stores count of full primes

	for(int i = L; i <= R; i++)
	{
		
		if ((i % 2) != 0 && isFulPrime(i))// Check if i is full prime
		{
			cnt++;
		}
	}
	return cnt;
}

public static void main (String[] args)
{
	int L = 1, R = 10;

	int ans = 0;// Stores count of full primes

	if (L < 3)
	ans++;
		
	System.out.println(ans + countFulPrime(L, R));
}
}


