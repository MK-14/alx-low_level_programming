#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *a);
void print_binary(unsigned long int y);
int get_bit(unsigned long int y, unsigned int index);
int set_bit(unsigned long int *y, unsigned int index);
int clear_bit(unsigned long int *y, unsigned int index);
unsigned int flip_bits(unsigned long int y, unsigned long int f);
int _atoi(const char *t);
int _putchar(char d);
int get_endianness(void);

#endif
