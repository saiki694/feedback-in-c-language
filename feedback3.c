
#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("feedback.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    fprintf(fp, "Our C programming sir teaches very well.\n");
    fprintf(fp, "He explains every concept clearly.\n");
    fprintf(fp, "His teaching makes programming easy to understand.\n");
    fprintf(fp, "He encourages us to practise coding.\n");
    fprintf(fp, "Thank you sir for your excellent teaching.\n");

    fclose(fp);

    printf("Feedback added successfully");

    return 0;
}
