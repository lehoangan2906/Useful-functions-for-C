// Sap xep 5 so double
void bai9()
{
	double a[100];
	
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%lf", &a[i]);
	}
	
	int j;
	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (a[i] < a[j])
			{
				double temp = a[i];
				a[i] = a[j];
				a[j] = temp; 
			}
		}
	}
	
	for (i = 0; i < 5; i++)
	{
		if (i != 4) printf("%g-", a[i]);
		else printf("%g", a[i]);
	}
}
