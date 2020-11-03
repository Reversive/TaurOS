#include "basic_lib.h"
#include "stdio.h"
#include "time.h"

void print_mem(char * from, char * buffer);
int info_mem( char * str);
int is_hexa_digit(char digit);
char * parse_str_to_hexa(char * str);
int is_number(char c);
void copy_mem(char * from, char * buffer);
void print_mem_in_screen(char* startPointer,char* buffer);