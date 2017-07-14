#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int n) {
	
 if(n % 2 == 0) return 0;
 
 //FACT: For two factors of n; while one is greater than n, other one is less than n.
 long int max = floor(sqrt(n)); 
 
 printf("sqrt(n) = %ld\n", max);
 for(long int i = 3; i < max; i+=2) {
	 if(n % i == 0) return 0;
 }	
	
 return 1;
}

int main() {
 
 int n, prime;
 clock_t start, end;
 double cpu_time_used;
 
 
 printf("Enter a number: ");
 scanf("%d", &n);
 
 start = clock(); //To measure algorithm's running time
 prime = isPrime(n);
 end = clock();
 
 if(prime)
  printf("The number is prime\n");
 else
  printf("The number is not prime\n");
  	
 cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
 printf("cpu time used = %.7f\n", cpu_time_used);
 
	
	
 return 0;
}
