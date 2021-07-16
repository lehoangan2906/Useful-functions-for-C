// sap xep mang theo ascii
void q3()
{
	int n; scanf("%d", &n);
	char a[100];
	int i;
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		scanf("%c", &a[i]);
	}
	
	int j;
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				char temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (i = 0; i < n; i++)
	i == n-1 ? printf("%c", a[i]) : printf("%c ", a[i]);
}
