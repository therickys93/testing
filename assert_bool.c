#include "testing.h"
#include <stdio.h>
#include <stdlib.h>

#define TRUE(x) x
#define FALSE(x) !x

int assert_true_with_file_and_line(int x, const char* file, const int line){
    if(TRUE(x)) {
        printf("testing assert_true on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_true -- Value %d is not 1\n", file, line, x);
        exit(1);
    }
}

int assert_false_with_file_and_line(int x, const char* file, const int line){
    if(FALSE(x)){
        printf("testing assert_false on line %d...ok!\n", line);
        return 0;
    } else {
        printf("%s:%d assert_false -- Value %d is not 0\n", file, line, x);
        exit(1);
    }
}