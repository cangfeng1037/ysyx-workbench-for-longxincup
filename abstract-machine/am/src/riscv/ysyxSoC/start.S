.section entry, "ax"
.globl _start
.type _start, @function

# start.S 进bootloader

_start:
  mv s0, zero 
  la sp, _stack_pointer
  call _fsbl_main
1:
  j 1b
