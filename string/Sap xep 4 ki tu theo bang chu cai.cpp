// Sap xep 4 ki tu theo bang chu cai
void bai3() {
	char a[10][10], temp[10];
	int i;
	for (i = 0; i < 4; i++)
	{
		gets(a[i]);
	}
	
	int j;
	for (i = 0; i < 3; i++) {
		for (j = i + 1; j < 4; j++)
		{
			if (a[i] > a[j])
			{
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
		}
	}
	
	for (i = 0; i < 4; i++) {
		if (i != 3) printf("%s ", a[i]);
		else printf("%s", a[i]);
	}
}
