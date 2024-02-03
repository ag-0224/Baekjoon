#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int n;

	scanf("%d", &n);

	int data[50] = {1, 1};

	for (int i = 2; i <= n; i++) {
		data[i] = data[i - 1] + data[i - 2];
	}

	printf("%d\n", data[n - 1]);
	return 0;
}