#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int n;
	
	scanf("%d", &n);

	int data[] = { 0, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2 };

	int count = 0;

	while (n > 10) {
		n -= 7;
		count++;
	}

	count += data[n];

	printf("%d", count);
}