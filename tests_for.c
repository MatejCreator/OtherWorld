#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


int main() 
{
    FILE* ptr = fopen("file.txt", "r");

    
    fclose(ptr);
    return 0;
}