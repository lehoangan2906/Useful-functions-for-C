#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	//Nhap du lieu
	int i, j, m, n;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);

	//m chan, n chan
	if (m%2==0 && n%2==0) {
		//In hang doc
		for(i=1; i<=n; i++) {
			//In hang ngang
			for(j=1; j<=m; j++) {
				if(i==1 || i==n || j==1 || j==m) {
					//In * cho hang dau va hang cuoi doc va ngang
					printf(" * ");
				} else {
					printf("   ");
				}
			}
			//Xuong dong
			printf("\n");
		}
	}

	//m le, n chan
	if (m%2!=0 && n%2==0) {
		//In hang doc
		for(i=1; i<=n; i++) {
			//In hang ngang
			for(j=1; j<=m; j++) {
				if(i==1 || i==n || j==1 || j==m || j==m-(m/2)) {
					//In * cho hang dau va hang cuoi doc va ngang
					printf(" * ");
				} else {
					printf("   ");
				}
			}
			//Xuong dong
			printf("\n");
		}
	}

	//m chan, n le
	if (m%2==0 && n%2!=0) {
		//In hang doc
		for(i=1; i<=n; i++) {
			//In hang ngang
			for(j=1; j<=m; j++) {
				if(i==1 || i==n || i==n-(n/2) || j==1 || j==m) {
					//In * cho hang dau va hang cuoi doc va ngang
					printf(" * ");
				} else {
					printf("   ");
				}
			}
			//Xuong dong
			printf("\n");
		}
	}

	//m le, n le
	if (m%2!=0 && n%2!=0) {
		//In hang doc
		for(i=1; i<=n; i++) {
			//In hang ngang
			for(j=1; j<=m; j++) {
				if(i==1 || i==n || j==1 || j==m) {
					//In * cho hang dau va hang cuoi doc va ngang
					printf(" * ");
				} else if(i==(n/2)+1 && j==(m/2)+1) {
					printf(" * ");
				} else {
					printf("   ");
				}
			}
			//Xuong dong
			printf("\n");
		}
	}
	
	system("pause");
	return 0;
}


