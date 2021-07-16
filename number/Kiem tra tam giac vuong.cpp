// Kiem tra tam giac vuong
void q3()
{
	int a, b, c, max; scanf("%d%d%d", &a, &b, &c);
	if (a + b > c && b + c > a && c + a > b && (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b))
	printf("True");
	else printf("False");
}

