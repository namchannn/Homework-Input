#include <stdio.h>

int main(){
	
	int a, b; // Khai bao 2 bien a va b la 2 so nguyen tuong ung voi a = chieu dai, b = chieu rong
	printf("Nhap chieu dai: \n");
	scanf("%d", &a); // Nhap chieu dai
	printf("Nhap chieu rong: \n");
	scanf("%d", &b); // Nhap chieu rong
	printf("Dien tich hinh chu nhat:\n%d", a * b); // In ra ket qua dien tich hinh tron S = a * b
	return 0;
}
