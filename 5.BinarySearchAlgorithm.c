/*
A Recursive Binary Search Algorithm.
*/
#include<stdio.h>

int binarySearch(int x[],int element,int start,int end);
int main(){
	int x[20],n,i,index,start=0,end,element;
	printf("Enter number of  elements: ");
	scanf("%d",&n);
	end = n;
	printf("Enter array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d",&element);
	index = binarySearch(x,element,start,end-1);
	if(index == -1)
		printf("Element Not Found.\n");
	else
		printf("Element found at index : %d\n",index);


	return 0;
}

int binarySearch(int x[],int element,int start,int end){
	int mid,noOfElements,i;
	mid = (int)(start+end)/2;
	if(start > end)
		return -1;
	if(x[mid] == element)
		return mid;
	else if(x[mid] < element){
		start = mid+1;
		binarySearch(x,element,start,end);
	}
	else{
		start = 0;
		end = mid-1;
		binarySearch(x,element,start,end);
	}

}
