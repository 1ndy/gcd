#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int max(unsigned long long a, unsigned long long b) {
	if(a > b) {
		return a;
	} else {
		return b;
	}
}

unsigned long long int min(unsigned long long a, unsigned long long b) {
	if(a < b) {
		return a;
	} else {
		return b;
	}
}

long gcd(unsigned long long a, unsigned long long b) {

	if(b == 0) {
		return a;
	} else {
		unsigned long long int q = (a / b);
		unsigned long long int r = a - q*b;
		printf("%llu = %llu(%llu) + %llu\n", a, b, q, r);
		gcd(b,r);
	}
}

int main(int argc, char *argv[]) {
	if(argc != 3) {
		printf("usage: %s <num1> <num2>", argv[0]);
		return 1;
	}
	char *l1 = argv[1];
	char *l2 = argv[2];
	char *end;
	unsigned long long int a = max(strtoull(argv[1], &end, 10), strtoull(argv[2], &end, 10));
	unsigned long long int b = min(strtoull(argv[1], &end, 10), strtoull(argv[2], &end, 10));
	long int g = gcd(a,b);
	printf("GCD = %llu\n", g);
	return 0;
}
