#ifndef TESTING_H
#define TESTING_H

int assert_true_with_file_and_line(int, const char* file, const int line);
int assert_false_with_file_and_line(int, const char* file, const int line);
#define assert_true(int) assert_true_with_file_and_line(int, __FILE__, __LINE__)
#define assert_false(int) assert_false_with_file_and_line(int, __FILE__, __LINE__)
int assert_equals_with_file_and_line(int, int, const char* file, const int line);
#define assert_equals(x, y) assert_equals_with_file_and_line(x, y, __FILE__, __LINE__)

#endif