#include <stdio.h>
#include <math.h>
#include <stdlib.h>

	//1. Nhap mot mang gom n so thuc
	//2. Hien mang so thuc vua nhap
	//3. Co phan tu nao thuoc khoang (10,20) trong mang hay khong? Neu co thi hien vi tri cua cac phan tu do
	//4. Tinh trung binh nhung phan tu co chi so chia het cho 3 trong mang

int main() {
	
	int n;
	printf("Nhap so luong phan tu n: ");
	scanf("%d",&n);
	double array[n];
	//Nhap mang
	int i;
	for(i=0;i<n;i++){
		printf("\narray[%d]= ", i);
		scanf("%lf", &array[i]);
	}
	
	//2
	printf("\nMang so nguyen vua nhap la: ");
	for(i=0;i<n;i++){
		printf("%.2lf ", array[i]);
	}
	
	//3
	printf("\nVi tri cua cac phan tu thuoc khoang tu 10 toi 20 la: ");
	for(i=0;i<n;i++){
		if(array[i]>10 && array[i]<20){
			printf("%d ", i);
		}
	}
	
	//4
	double sum=0;
	int count=0;
	for(i=0;i<n;i++){
		if(i%3==0){
			sum+=array[i];
			count++;
		}
	}
	sum=sum/count;
	printf("\nTrung binh nhung phan tu co chi so chia het cho 3 trong mang la: %.2lf", sum);
	
	system("pause");
	return 0;
}

