#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

char input[100];
char name[20];
char rollno[20];
int i;

int S();
int A();
int main(void)
{
    printf("\nRecursive Descent Parsing for the following grammar\n\n");
    printf("\nS->cAd\nA->ab/a\n\n");
    printf("\nEnter the String to be Checked:");
    gets(input);
    printf("\nEnter the Name:");
    scanf("%s", name);
    printf("\nEnter the Roll No:");
    scanf("%s", rollno);

    if (S())
    {
        if (input[i + 1] == '\0')
            printf("\nString is ACCEPTED");
        else
            printf("\nString is NOT ACCEPTED");
    }
    else
        printf("\nString is NOT ACCEPTED");

    getch();
}

int S()
{
    if (input[i] == 'c')
    {
        i++;
        if (A())
        {
            if (input[i] == 'd')
            {
                i++;
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
}

int A()
{
    if (input[i] == 'a')
    {
        i++;
        if (input[i] == 'b')
        {
            i++;
            return 1;
        }
        else
            return 0;
    }
    else if (input[i] == 'a')
    {
        i++;
        return 1;
    }
    else
        return 0;
}
