#include "testing.h"
#include <stdlib.h>
#include <stdio.h>

#define EQUALS(x, y) x == y
#define NOT_EQUALS(x, y) x != y

int assert_equals_with_file_and_line(int x, int y, const char* file, const int line){
    if (EQUALS(x, y)){
        printf("testing assert_equals on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_equals -- Value %d is not equals to %d\n", file, line, x, y);
        exit(1);
    }
}

int assert_not_equals_with_file_and_line(int x, int y, const char* file, const int line){
    if (NOT_EQUALS(x, y)){
        printf("testing assert_not_equals on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_not_equals -- Value %d is equals to %d\n", file, line, x, y);
        exit(1);
    }
}