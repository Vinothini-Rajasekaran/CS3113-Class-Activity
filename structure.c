#include <stdio.h>
#include <stdlib.h>

struct _course
{
    int student_id;
    int marks;
    char subject[20];   
};
typedef struct _course course;

int main()
{
    // TODO: Task1: Create a pointer variable ptr for the structure course

    int i, no_of_records;
    printf("Enter number of records: ");
    scanf("%d", &no_of_records);

    // TODO Task 2: Allocate the memory for no_of_records structures with pointer ptr pointing to the base address.


    // Iterate through the no_of_records to get information from the user for each record
    for(i = 0; i < no_of_records; ++i) {
        printf("Enter the student id,name of the subject and marks respectively:\n");
        
        //TODO Task 3: Get the info id,name of the subject followed by the student mark
    }

    printf("Displaying Student Information:\n");
    for(i = 0; i < no_of_records ; ++i) {
        printf("Student ID: %d\n",(ptr+i)->student_id);
        printf("%s\t%d\n", (ptr+i)->subject, (ptr+i)->marks);
    }
    return 0;
}
