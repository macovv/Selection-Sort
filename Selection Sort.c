/*
 ============================================================================
 Name        : Selection.c
 Author      : szymon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int arrSize = 0;
	printf("Enter array size: \n");
	scanf("%d", &arrSize);

	int *arr = malloc(sizeof(int)*arrSize);

	for(int i=0;i<arrSize;i++){
		printf("Enter %d value:\n", i+1);
		scanf("%d",&arr[i]);
	}


	for(int i=0;i<arrSize;i++){
		int min = arr[i];
		for(int j=i+1;j<arrSize;j++){
			if(min>arr[j]){
				int temp = min;
				min = arr[j];
				arr[j] = temp;
				arr[i] = min;
			}
		}
	}

	for(int i=0;i<arrSize;i++){
		printf("%d ",arr[i]);
	}
	free(arr);
	printf("\n");
	return 0;
}
