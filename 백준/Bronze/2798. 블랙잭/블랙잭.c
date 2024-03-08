#include <stdio.h>
#include <math.h>
#define LEN 100

int main(void) {
	int n, m;

	scanf("%d %d", &n, &m);

	int card_list[LEN] = { 0, };

	for (int i = 0; i < n; i++) {
		scanf("%d", &card_list[i]);
	}

	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				int sum = card_list[i] + card_list[j] + card_list[k];
				if (sum <= m && abs(m - result) > abs(m - sum))
					result = sum;
			}
		}
	}
	printf("%d\n", result);

	return 0;
}