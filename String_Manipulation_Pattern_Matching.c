#include <stdio.h>
#include <string.h>
void string_manipulation()
{
    char str1[20], str2[20], copy[50];
    printf("Enter 1st String: ");
    gets(str1);
    printf("1st String length is %lu\n", strlen(str1));
    printf("Copied string: ");
    puts(strcpy(str2, str1));
    int s = strcmp(str1, str2);
    printf("String comparation:-\n");
    if (s == 0)
    {
        printf("Both strings are exactly same.\n");
    }
    else
    {
        printf("Both strings are different.\n");
    }
    printf("Concatenated string: ");
    puts(strcat(str1, str2));
}
void pattern_matching(char *text, char *pattern)
{
    int n = strlen(text);
    int m = strlen(pattern);
    int i, j;
    for (i = 0; i <= n - m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }
        if (j == m)
        {
            printf("Pattern found on index %d\n", i);
        }
    }
}
int main()
{
    int choice;
    printf("Enter choice:-\n1.String manipulation\t2.Pattern Matching: ", choice);
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("This is String Manipulation Program.\n");
        string_manipulation();
        break;
    }
    case 2:
    {
        printf("This is Pattern Matching Program.\n");
        char text[50] = "ABACABCAABCAABCA";
        char pattern[10] = "BCA";
        pattern_matching(text, pattern);
        break;
    }
    default:
        printf("Invalid\n");
        break;
    }
    return 0;
}