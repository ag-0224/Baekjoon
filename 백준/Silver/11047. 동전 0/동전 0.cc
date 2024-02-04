#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int n, k;

	scanf("%d %d", &n, &k);

	int coin[10];

	for (int i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
	}
	
	int result = 0;

	for (int i = 0; i < n; i++) {
		result += (k / coin[n - 1 - i]);
		k %= coin[n - 1 - i];
	}

	printf("%d", result);
}