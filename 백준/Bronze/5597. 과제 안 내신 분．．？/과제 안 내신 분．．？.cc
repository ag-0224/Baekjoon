#include <stdio.h>
#pragma warning(disable : 4996)

#define LEN 30

int min(int x, int y) {
	if (x < y) {
		return x;
	}
	else {
		return y;
	}
}

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int main(void) {
	int data[LEN] = { 0 };

	for (int i = 0; i < LEN - 2; i++) {
		int n;
		scanf("%d", &n);
		data[n - 1] = 1;
	}

	int count = 0;
	int result[2] = { 0 };
	for (int i = 0; i < LEN; i++) {
		if (!data[i]) {
			result[count] = i + 1;
			count++;
		}
	}

	printf("%d\n", min(result[0], result[1]));
	printf("%d\n", max(result[0], result[1]));

	return 0;
}