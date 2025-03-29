#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>   // include the C string library
#include <stdlib.h>


int main(void) 
{
    // Open files
    const char* inp_file_path = "input.txt";
    const char* out_file_path = "output.txt";
    FILE* fin = fopen(inp_file_path, "r");
    if (!fin) {
        fprintf(stderr, "%s - io error: %s\n", inp_file_path, strerror(errno));
        return EXIT_FAILURE;
    }
    FILE* fout = fopen(out_file_path, "w");
    if (!fin) {
        fprintf(stderr, "%s - io error: %s\n", out_file_path, strerror(errno));
        return EXIT_FAILURE;
    }
    char ch;
    int io_result = 0;
    while ((ch = fgetc(fin)) != EOF && io_result != EOF) {
        io_result = fputc(ch, fout);
    }
    fclose(fin);
    fclose(fout);
    return io_result == EOF ? EXIT_FAILURE : EXIT_SUCCESS;
}