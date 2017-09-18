# testing

[![Build Status](https://travis-ci.org/therickys93/testing.svg?branch=master)](https://travis-ci.org/therickys93/testing)

Simple c library for making tests. This is a work in progress. If you want to make new features feel free to fork this repo an make a pull request.

## Install

Maybe you have to use sudo in front of these commands:

```
make 
make install
```

## Usage

```
#include <testing.h>

int main(void){
    assert_true(1);
    return 0;
}
```
