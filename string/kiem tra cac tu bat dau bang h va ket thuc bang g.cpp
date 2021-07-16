// kiem tra cac tu bat dau bang 'h' va ket thuc bang 'g'
void q6()
{
	char a[100]; gets(a);
	char temp[100];
	int n = strlen(a), i, check = 0, j = 0;
	
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != ' ')
		{
			temp[j] = a[i];
			j++;
		}
		else
		{
			if (j != 0)
			{
				temp[j] = '\0';
				if (temp[0] == 'h' && temp[strlen(temp) - 1] == 'g') check += 1;
				j = 0;
			}
		}
		if (i == strlen(a)-1 && a[i] != ' ')
		{
			temp[j] = '\0';
			if (temp[0] == 'h' && temp[strlen(temp) - 1] == 'g') check += 1;
		}
	}
	
	printf("%d", check);
}
