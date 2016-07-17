/* Program:Implement binary search*/
  /*Author:Takdir Bartaula*/
/*Date:2016/07/17*/
/*Refrence:Data structure using C and C++ page #133*/
 #include <stdio.h>
 int main()
 {
 	int i,a[10]={1,5,9,10,22,45,78,99,100,959},n,lo=0,hi=9,mid,flag=0;
 	for (i=0;i<10;i++){
 		printf("%d\t",a[i]);
 	          }
 	printf("Enter a element from given array to search\n");	
 	scanf("%d",&n);
 	while (lo <= hi){
 		mid=(lo+hi)/2;
 		       if (n==a[mid]){
 			flag=1;
 			break;
 	        }
 		else if(n<a[mid])
 				hi=mid-1;		
 			else
 			lo=mid+1;
			 }
 	      if(flag==1)
 		printf("data :%d found in memory location %u",n,&n);
 		else
 		printf("Data is not found");
 		return 0;
}
