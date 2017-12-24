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
	int arr[] = {10,23,11,3,567,34,2,3};
	int arrSize = sizeof(arr)/sizeof(int);

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
	printf("\n");
	return 0;
}
