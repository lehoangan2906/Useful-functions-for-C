// Tim chuoi o trong chuoi p va thay chuoi o bang dao nguoc cua no

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
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
					for (k = b - 1; k >= 0; k--)
						o[i + (b-1) - k] = p[k];
					i += b - 1;				
				}
			}
			else dem = 0;
		}
		i++;
	}
	printf("%s", o);
	
	system("pause");
	return 0;
}


// hoac
//  Thay chuoi o trong chuoi p bang dao nguoc chuoi o
void q6()
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
					for (k = b - 1; k >= 0; k--)
						o[i + (b-1) - k] = p[k];
					i += b - 1;				
				}
			}
			else dem = 0;
		}
		i++;
	}
	printf("%s", o);
}
