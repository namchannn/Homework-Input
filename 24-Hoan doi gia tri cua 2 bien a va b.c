#include <stdio.h>

int main(){
	
	int a, b; // Khai bao 2 bien a va b la 2 so nguyen
	printf("Nhap a: \n");
	scanf("%d", &a); // Nhap gia tri a
	printf("Nhap b: \n");
	scanf("%d", &b); // Nhap gia tri b
	
	int c = a; // Khai bao bien c la so nguyen, gan gia tri c = a
	a = b; // gan gia tri a = b
	b = c; // gan gia tri b = c
	printf("Sau khi hoan doi, a = %d, b = %d", a, b); // In ra ket qua gia tri a va b sau khi hoan doi
	return 0;
}
