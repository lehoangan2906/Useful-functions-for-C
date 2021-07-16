// Thay the chuoi cuoi cung bang s2 trong s1 bang s3.
void bai6()
{
	char s1[100], s2[100], s3[100];
	gets(s1);
	gets(s2);
	gets(s3);
	
	int a1 = strlen(s1);
	int a2 = strlen(s2);
	int a3 = strlen(s3);
	
	char dau[100], duoi[100];
	int i, x, k = a2 - 1;
	
	for (i = a1 - 1; i >= a2 - 1; i--)
	{
		if (s1[i] == s2[k])
		{
			k--;
			if (k == -1)
			{
				x = i;
				break;
			}
		}
		else k = a2 - 1;
	} 
	
	for (i = 0; i < x; i++)
	{
		dau[i] = s1[i];
	}
	dau[x] = '\0';
	
	for (i = x + a2; i < a1; i++)
	{
		duoi[i-x-a2] = s1[i];
	}
	duoi[a1 - x - a2] = '\0';
	
	strcpy(s1,dau);
	strcat(s1,s3);
	strcat(s1,duoi);
	
	printf("%s", s1);
}
