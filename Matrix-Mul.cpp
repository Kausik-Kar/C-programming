#include<stdio.h>

int main(){
	int mat1[3][3];
	int mat2[3][3];
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	int arr1[9] = {5,4,3,8,1,3,9,4,8};
	int x=0;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			mat1[i][j] = arr[x];
			x++;
		}
	}
	
	x = 0;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			mat2[i][j] = arr1[x];
			x++;
		}
	}
	
	int mul[3][3];
	int sum;
	int prod;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			sum = 0;
			for(int k=0; k<3; k++){
				prod = 1;
				prod = mat1[i][k] * mat2[k][j];
				sum += prod;
			}
			mul[i][j] = sum;
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
