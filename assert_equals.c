#include "testing.h"
#include <stdlib.h>
#include <stdio.h>

int assert_equals_with_file_and_line(int x, int y, const char* file, const int line){
    if (x == y){
        printf("testing assert_equals on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_equals -- Value %d is not equals to %d\n", file, line, x, y);
        exit(1);
    }
}