#include <stdio.h>
#include "testing.h"

#define TRUE 1
#define FALSE 0

int fact(int n);
int min(int x, int y);

int main(void){
	assert_true(TRUE);
	assert_false(FALSE);
	assert_equals(6, fact(3));
	assert_not_equals(93, min(19, 93));
	assert_greater_than(5, 3);
	assert_lower_than(3, 5);
	assert_greater_than_or_equals(5, 3);
	assert_greater_than_or_equals(5, 5);
	assert_lower_than_or_equals(3, 5);
	assert_lower_than_or_equals(5, 5);
	return 0;
}

int fact(int n){
	if ( n <= 1 ){
		return 1;
	} else {
		return n * fact(n - 1);
	}
}

int min(int x, int y){
	return (x < y) ? x : y;
}
