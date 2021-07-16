// Giai pt bac 2
void q2()
{
	float a, b, c; scanf("%f%f%f", &a, &b, &c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0) printf("Infinite solution");
			else printf("No solution");
		}
		else printf("%g", -c/b);
	}
	else
	{
		float delta = b*b - 4*a*c;
		if (delta < 0) printf("No solution");
		else if (delta == 0) printf("%g", -b/2/a);
		else if (delta > 0)
		{
			float x1 = (-b + pow(delta, 0.5))/2/a;
			float x2 = (-b - pow(delta, 0.5))/2/a;
			x1 > x2 ? printf("%g %g", x1, x2) : printf("%g %g", x2, x1);
		}
	}
}
