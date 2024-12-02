#include<stdio.h>
int main(){
	int mang[5]={5,12,9,8,7};
    int n = sizeof(mang) / sizeof(mang[0]);
	int nhap;
	printf(" nhap vao 1 phan tu de tim kiem");
	scanf("%d",&nhap);
	int check=0;
	int index;
	for(index=0;index<n;index++){
		if(mang[index]==nhap){
			check=1;
			break;
			}
			}
			if(check==1){
				printf("phan tu %d có trong mang tai vi tri%d\n",nhap,index);
				} else{
					printf(" phan tu %d kh co trong mang",nhap);
					}
					return 0;
					}
