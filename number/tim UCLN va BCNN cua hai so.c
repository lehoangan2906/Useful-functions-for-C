#include <stdio.h>
#include <math.h>

int main() {
	
	//Nhap du lieu
	int a, b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	
	//Tim UCLN
	int a1=a,b1=b;
	while(a!=b){
		if(a>b){
			a=a-b;
		} else {
			b=b-a;
		}
	}
	printf("\nUCLN(%d,%d)=%d",a1,b1,a);
	
	//Tim BCNN
	int a2=a1,b2=b1;
	while(a1!=b1){
		if(a1>b1){
			b1=b1+b2;
		} else {
			a1=a1+a2;
		}
	}
	printf("\nBCNN(%d,%d)=%d",a2,b2,a1);
	
   return 0;
}

