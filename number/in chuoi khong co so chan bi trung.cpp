// In chuoi khong co so chan bi trung
void q5()
{
	int n; scanf("%d", &n);
	int i, a[100];
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	int k = 1, b[100], j, dem = 0;
	b[0] = a[0];
	
	for (i = 1; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			b[k] = a[i];
			k++;
		}
		else
		{
			for (j = 0; j < k; j++)
			{
				if (b[j] != a[i]) dem++;
			}
			if (dem == k)
			{
				b[k] = a[i];
				k++;
				dem = 0;
			}
			else dem = 0;
		}
	}
	
	for (i = 0; i < k; i++)
	i != k-1 ? printf("%d\n", b[i]) : printf("%d", b[i]);
}
