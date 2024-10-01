# cAML

## Directories
* src/
 * caml/
  * preprocess/
   * table/
  * runtime/
  * caml.c
 * include/
  * caml/
   * preprocess/
    * table/
   * runtime/
   * caml.h
* test/

## Installation into a kernel

Copy the caml directory under src/ into your kernel's source code folder.
Copy the caml include directory under src/include/ into your kernel's source code include folder.

## Use

## Testing

Simply run "make test" which will compile the testing program, ASL cases, and tables. The testing program
will then be automatically invoked, first testing various configurations of tables before testing AML capabilities.
