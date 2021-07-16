// Thay chuoi s2 trong s1 bang chuoi s2 in hoa
void q8()
{
	char o[100], p[100];
	gets(o);
	gets(p);
	int a = strlen(o);
	int b = strlen(p);
	int i = 0, j, k, dem = 0;
	while (i <= a - b)
	{
		for (j = i; j < i + b; j++)
		{
			if (o[j] == p[j-i])
			{
				dem++;
				if (dem == b)
				{
					for (k = 0; k < b; k++)
						o[i + k] -= 32;
					i += b - 1;				
				}
			}
			else dem = 0;
		}
		i++;
	}
	printf("%s", o);
}
int main()
{
	q8();
	return(0);
}
