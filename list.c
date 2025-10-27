#include <stdio.h>
int main()
{
    int n;
    char arr[n];
    printf("Enter no.of subjects");
    scanf("% d", &n);

    printf("Enter the subjects");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }
    printf("The subjects are");
    //new line added
    for (int i = 0; i < n; i++)
    {
        printf("%s", arr[i]);
    }
}