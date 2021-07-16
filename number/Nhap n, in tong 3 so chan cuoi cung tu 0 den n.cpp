// Nhap n, in tong 3 so chan cuoi cung tu 0 den n
void bai2() {
	int n;
	scanf("%d", &n);
	n%2==0 ? printf("%d", 3*n - 6) : printf("%d", 3*n - 9);
}
