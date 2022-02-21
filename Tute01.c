/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  #include<stdio.h>    //header file
int main(void) //the main function begins
{
	int sub1,sub2;     //declaration 
	int sum,avg=0;
	
	printf("enter 1 st subject marks :");     //taking kb inputs
	scanf("%d",&sub1);
    printf("enter 2 st subject marks :");
	scanf("%d",&sub2);
	
	sum=sub1+sub2;          //process
	avg=sum/2.0;
	
	printf("average is : %d",avg);
	
	

  
  return 0;
}

