ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; bss PT_LOAD; }

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  /* _flash_start and _entry_offset are defined in LDFLAGS */
  . = _flash_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } > flash AT> flash : text
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  } > flash AT> flash : text

  .data : {
    _sdata = .;
    *(.data*)
    _edata = .;
  } > sram AT> flash : data
  _sidata = LOADADDR(.data);
  edata = .;
  _data = .;

  .bss (NOLOAD) : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > sram : bss

  . = 0x0f000000;
  _heap_start = .;
  end = .;
  _end = .;

  /*
    堆从SRAM底部开始，向高地址增长
    栈放在堆之后，从高地址向低地址增长
  */

  _stack_pointer = 0x0f002000;  /* 栈顶，8KB空间，栈向下增长 */
}
