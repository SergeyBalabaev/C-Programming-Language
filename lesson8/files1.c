#include <stdio.h>

int main(void)
{
    char message[14] = "lalalalalalal";
    char filename[9] = "data.txt";
    char cc[3];
    FILE* fp;

    if ((fopen_s(&fp, filename, "w")) != NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }
    fprintf(stdout, "%s\n", message);
    fprintf(fp, "%s", message);
    fclose(fp);

    if (fopen_s(&fp, filename, "r") != NULL)
    {
        perror("Error occured while opening file");
        return 1;
    }
    while ((fgets(cc, 3, fp)) != NULL)
    {
        printf("%s", cc);
    }
    fclose(fp);   
    return 0;
}
