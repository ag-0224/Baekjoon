#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int n;

	scanf("%d", &n);

	int data[10] = { 1, -1, 1, 2, -1, 2, 3, 2, 3, 4 };

	int result = 0;

	while (n > 12) {
		n -= 5;
		result += 1;
	}

	result += data[n - 3];

	printf("%d\n", result);
	return 0;
}