#include<stdio.h>

struct student
{
    char name[51];
    int id;
    int marks[3];
    float avg;
};

int main()
{
    struct student std[50];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the name of student %d:",i+1);
        scanf("%s", std[i].name);

        printf("Enter the id of student %d:",i+1);
        scanf("%d", &std[i].id);

        printf("Enter the Quiz 1 Marks of student %d:", i+1);
        scanf("%d", &std[i].marks[0]);
        printf("Enter the Quiz 2 Marks of student %d:", i+1);
        scanf("%d", &std[i].marks[1]);
        printf("Enter the Quiz 3 Marks of student %d:", i+1);
        scanf("%d", &std[i].marks[2]);

        int sum = std[i].marks[0]+std[i].marks[1]+std[i].marks[2];
        std[i].avg = (float)sum/3.0;

        printf("The name of student %d is %s\n", i+1, std[i].name);
        printf("The id of %s is %d\n", std[i].name, std[i].id);

        printf("The Quiz 1 marks of %s is %d\n", std[i].name, std[i].marks[0]);
        printf("The Quiz 2 marks of %s is %d\n", std[i].name, std[i].marks[1]);
        printf("The Quiz 3 marks of %s is %d\n", std[i].name, std[i].marks[2]);
        printf("The Average of 3 Quiz marks of %s is %f\n", std[i].name, std[i].avg);

    }
    int max=-1, index=-1;
    for(i=0;i<3;i++)
    {
        if(std[i].avg>max)
        {
            max = std[i].avg;
            index = i;
        }
    }
    printf("The student id, name and average with highest average is: %d, %s, %0.1f\n", std[index].id, std[index].name, std[index].avg);
}
