
// Dem so nguyen am, phu am
void q6()
{
	char a[100], b[100] = "aeiou", c[100] = "bcdfghjklmnpqrstvwxyz";
	gets(a);
	int i, j, ng = 0, ph = 0;
	
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
		for (j = 0; j < strlen(b); j++)
		if (a[i] == b[j])
		{
			ng++;
			continue;
		}
		for (j = 0; j < strlen(c); j++)
		if (a[i] == c[j])
		{
			ph++;
			continue;
		}
	}
	printf("ph.am:\t%3d\nng.am:\t%3d", ph, ng);
}
