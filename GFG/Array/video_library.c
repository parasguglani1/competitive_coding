// C Program to Store video library (title, language, production and year) Using Structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct video_library
{
    char title[50];
    char language[50];
    char production[50];
    int year;
};
 int main()
{
    int i, n;
    struct video_library v[100];
    printf("Enter the number of videos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the title: ");
        scanf("%s", v[i].title);
        printf("Enter the language: ");
        scanf("%s", v[i].language);
        printf("Enter the production: ");
        scanf("%s", v[i].production);
        printf("Enter the year: ");
        scanf("%d", &v[i].year);
    }
    printf("\n\n\n");
    printf("Title\t\tLanguage\t\tProduction\t\tYear\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%s\t\t%s\t\t%d\n", v[i].title, v[i].language, v[i].production, v[i].year);
    } 
};
