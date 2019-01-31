CLASS ACTIVITY - CS 3113 SPRING 2019

This activity is to create a C program to store information using structures with dynamic memory allocation.

Perform the tasks below:
•	Program must take an integer input from the user into a variable named no_of_student_records.
•	Allocate the memory of no_of_student_records structure variable using malloc() function.
•	Create a structure named course with the following variables in it: student_id, marks and subject.
•	Based on the no_of_student_records value entered by the user, for each record get the information student_id, mark and subject from the user.
•	Finally print out all the details for all student records.

Here is a skeleton code of the program:

	#include <stdio.h>
	#include<stdlib.h>
	struct course
	{
	   int student_id;
	   int marks;
	   char subject[20];    
	};

	int main()
	{
	   //Task1: Create a pointer variable ptr for the structure course


	   int i, no_of_records;
	   printf("Enter number of records: ");
	   scanf("%d", &no_of_records);

	   // Task 2: Allocate the memory for no_of_records structures with pointer ptr pointing to the base address.


	//Iterate through the no_of_records to get information from the user for each record
	   for(i = 0; i < no_of_records; ++i)
	   {
	       printf("Enter the student id,name of the subject and marks respectively:\n");
	     //Task 3: Get the info id,name of the subject followed by the student mark
	  
	   }

	   printf("Displaying Student Information:\n");
	   for(i = 0; i < no_of_records ; ++i)
	{
	       printf("Student ID: %d\n",(ptr+i)->student_id);
	       printf("%s\t%d\n", (ptr+i)->subject, (ptr+i)->marks);
	}
	   return 0;
	}

