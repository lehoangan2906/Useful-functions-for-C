
// In ra so chan xuat hien nhieu nhat trong day
void q7()
{
	int i, a[100], b[100], c[100], d[100];
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 0;
		c[i] = 0;
		d[i] = 1;
	}
	
	int max = 0, k = 0, j;
	for (i = 0; i < 7; i++)
	{
		if (a[i] % 2 == 0 && b[i] == 0)
		{
			c[k] = a[i];
			for (j = i+1; j < 7; j++)
			{
				if (a[j] == a[i])
				{
					d[k]++;
					b[j] = 1;
				}
			}
			if (max < d[k]) max = d[k];
			k++;
		}
	}
	
	if (k == 0) printf("Pew!!!");
	else
	{
		for (i = 0; i < k; i++)
		{
			if (d[i] == max)
			{
				i == k - 1 ? printf("%d", c[i]) : printf("%d ", c[i]);
			}
		}
	}
}
