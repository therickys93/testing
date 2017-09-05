#include "testing.h"
#include <stdio.h>
#include <stdlib.h>

int assert_true_with_file_and_line(int x, const char* file, const int line){
    if(x == 1) {
        printf("testing assert_true on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_true -- Value %d is not 1\n", file, line, x);
        exit(1);
    }
}

int assert_false_with_file_and_line(int x, const char* file, const int line){
    if(x == 0){
        printf("testing assert_false on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_false -- Value %d is not 0\n", file, line, x);
        exit(1);
    }
}

int assert_equals_with_file_and_line(int x, int y, const char* file, const int line){
    if (x == y){
        printf("testing assert_equals on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_equals -- Value %d is not equals to %d\n", file, line, x, y);
        exit(1);
    }
}