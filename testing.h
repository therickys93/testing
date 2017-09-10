#ifndef TESTING_H
#define TESTING_H

// assert_bool.c
int assert_true_with_file_and_line(int, const char* file, const int line);
#define assert_true(int) assert_true_with_file_and_line(int, __FILE__, __LINE__)

int assert_false_with_file_and_line(int, const char* file, const int line);
#define assert_false(int) assert_false_with_file_and_line(int, __FILE__, __LINE__)

// assert_equals.c
int assert_equals_with_file_and_line(int, int, const char* file, const int line);
#define assert_equals(x, y) assert_equals_with_file_and_line(x, y, __FILE__, __LINE__)

int assert_not_equals_with_file_and_line(int, int, const char* file, const int line);
#define assert_not_equals(x, y) assert_not_equals_with_file_and_line(x, y, __FILE__, __LINE__)

// assert_disequals.c
int assert_greater_than_with_file_and_line(int, int, const char* file, const int line);
#define assert_greater_than(x, y) assert_greater_than_with_file_and_line(x, y, __FILE__, __LINE__)

int assert_lower_than_with_file_and_line(int, int, const char* file, const int line);
#define assert_lower_than(x, y) assert_lower_than_with_file_and_line(x, y, __FILE__, __LINE__)

#endif