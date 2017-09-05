#include <stdio.h>
#include "testing.h"

#define TRUE 1
#define FALSE 0

int fact(int n){
	if ( n <= 1 ){
		return 1;
	} else {
		return n * fact(n - 1);
	}
}

int main(void){
	assert_true(TRUE);
	assert_false(FALSE);
	assert_equals(1, 1);
	assert_equals(6, fact(3));
	return 0;
}
