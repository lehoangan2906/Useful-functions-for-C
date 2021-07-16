//In 5 ki tu o giua 1 chuoi
void bai6() {
	char a[100]; gets(a);
	int i = (strlen(a) - 1) / 2 - 2;
	char b[10];
	int j;
	for (j = 0; j < 5; j++, i++)
	b[j] = a[i]; 
	
	printf("%s", b);
}
