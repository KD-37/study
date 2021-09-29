#include<stdio.h>

int fibonacci1(int n) {
	int* arr;
	arr = (int*)malloc(sizeof(int) * n);
	arr[0] = 1, arr[1] = 1;
	for (int i = 0; i < n-1; i++) {
		arr[i + 2] = arr[i + 1] + arr[i];

	}
	return arr[n - 1];

}
int fibonacci2(int n) {
	int prev1 = 1, prev2 = 1;
	int prev3 = 0;
	
	for (int i = 1; i < n-1; i++) {
		prev3 = prev1 + prev2;
		prev1 = prev2;
		prev2 = prev3;
	}

	return prev3;

}
int fibonacci3(int n) {

	if (n ==1|| n==2) {
		return 1;
	}

	return fibonacci3(n - 1) + fibonacci3(n - 2);
}

int main() {
	int i;
	int n;
	int r,r1,r2;
	scanf("%d", &n);
	
	r=fibonacci1(n);
	r1 = fibonacci2(n);
	r2 = fibonacci3(n);
	printf("%d,%d,%d", r,r1,r2);
	

	return 0;
}