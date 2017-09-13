#include "testing.h"

enum boolean { FALSE, TRUE };

int main(void){
	assert_true(TRUE);
	assert_false(FALSE);
	assert_equals(6, 6);
	assert_not_equals(93, 19);
	assert_greater_than(5, 3);
	assert_lower_than(3, 5);
	assert_greater_than_or_equals(5, 3);
	assert_greater_than_or_equals(5, 5);
	assert_lower_than_or_equals(3, 5);
	assert_lower_than_or_equals(5, 5);
	return 0;
}