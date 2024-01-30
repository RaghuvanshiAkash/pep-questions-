//......Q1 wave array......
//...Q2 move zero to right...
// A C program to move all zeroes at the end of array
// ..........gfg solution.....
 
#include <stdio.h> 


void pushZerosToEnd(int arr[], int n) 
{ 
	int count = {};  

	 
	for (int i = 0; i < n; i++) 
		if (arr[i] != 0) 
			arr[count++] = arr[i]; 
								

	
	while (count < n) 
		arr[count++] = 0; 
} 

int main() 
{ 
	int arr[] = {8, 0, 5, 3, 0, 0, 1, 9, 0, 2, 0, 8}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	pushZerosToEnd(arr, n); 
	printf("%s\n", "Array after pushing all zeros to end of array:"); 
	for (int i = 0; i < n; i++) 
	printf("%d ", arr[i]); 
	return 0; 
}
