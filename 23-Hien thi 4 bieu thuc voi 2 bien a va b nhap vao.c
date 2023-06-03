#include <stdio.h>

int main(){
	
	int a, b; // Khai bao 2 bien a va b la 2 so nguyen
	printf("Nhap a: \n");
	scanf("%d", &a); // Nhap gia tri a
	printf("Nhap b: \n");
	scanf("%d", &b); // Nhap gia tri b
	printf("a + b = %d\n", a + b); // In ra ket qua cua bieu thuc a + b
	printf("a - b = %d\n", a - b); // In ra ket qua cua bieu thuc a - b
	printf("a * b = %d\n", a * b); // In ra ket qua cua bieu thuc a * b
	printf("a / b = %d\n", a / b); // In ra ket qua cua bieu thuc a / b
	printf("a mod b = %d", a % b); // In ra ket qua cua bieu thuc a % b (phan du cua a / b)
	return 0;
}
