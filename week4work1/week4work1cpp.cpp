#include<stdio.h>
int main() {
	int a[5],i,j,temp;
	printf("\"Sequene check\"");
	printf("Enter 5 number : ");
	
	for (i = 0;i < 5;i++)
		scanf_s("%d", &a[i]);
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
			if (a[j] <a[i]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			
	for (i = 0;i < 5;i++)
		printf("%d ", a[i]);

	

}