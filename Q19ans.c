#include<stdio.h>
#include<conio.h>
#define STUDENT_NO 10
 
void main()
{
    int s[STUDENT_NO];
    int i, j,max_no, temp;
 
    printf("Enter the value of num \n");
    scanf("%d",&max_no);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        ptintf("enter the number of gifts puchased by s%d th student",i+1);
        scanf("%d",&s[i]);
    }
    
    for (i = 0; i <max_no; i++)
    {
        for (j = 0; j < (max_no - i - 1); j++)
        {
            if (s[j] > s[j + 1])
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf(" The order of the billed students will be :\n");
    for (i = 0; i <max_no; i++)
    {
        printf("s%d having number od gifts as:%d,\n", s[i]);
    }
}
