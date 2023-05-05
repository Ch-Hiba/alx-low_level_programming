#ifndef H
#define H

unsigned int binary_to_uint(const char *);

int _putchar(char );

void print_binary(unsigned long int);

int get_bit(unsigned long int, unsigned int);

int set_bit(unsigned long int *, unsigned int);

void convert_to_binary(unsigned long int, unsigned short *);

unsigned long int convert_to_decimal(unsigned short *);

int clear_bit(unsigned long int *, unsigned int);

void convert_to_binary2(unsigned long int, unsigned short *);

unsigned long int convert_to_decimal2(unsigned short *);

unsigned int flip_bits(unsigned long int , unsigned long int);

void convert_to_binary3(unsigned long int, unsigned short *);
int get_endianness(void);

#endif /* H */
