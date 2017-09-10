#include "testing.h"
#include <stdlib.h>
#include <stdio.h>

#define GREATER_THAN(x, y) x > y
#define LOWER_THAN(x, y) x < y

int assert_greater_than_with_file_and_line(int x, int y, const char* file, const int line){
    if(GREATER_THAN(x, y)) {
        printf("testing assert_greater_than on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_greater_than -- Value %d is not greater than %d\n", file, line, x, y);
        exit(1);
    }
}

int assert_greater_than_or_equals_with_file_and_line(int x, int y, const char* file, const int line){
    if(x >= y) {
        printf("testing assert_greater_than_or_equals on line %d...ok!\n", line);
        return 0; 
    } else {
        printf("%s:%d assert_greater_than_or_equals -- Value %d is not greater than %d\n", file, line, x, y);
        exit(1);
    }
}

int assert_lower_than_with_file_and_line(int x, int y, const char* file, const int line){
    if(LOWER_THAN(x, y)) {
        printf("testing assert_lower_than on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_lower_than -- Value %d is not lower than %d\n", file, line, x, y);
        exit(1);
    }
}

int assert_lower_than_or_equals_with_file_and_line(int x, int y, const char* file, const int line){
    if(x <= y) {
        printf("testing assert_lower_than_or_equals on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_lower_than_or_equals -- Value %d is not lower than %d\n", file, line, x, y);
        exit(1);
    }
}