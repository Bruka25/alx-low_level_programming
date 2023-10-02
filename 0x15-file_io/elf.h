#ifndef ELF_H
#define ELF_H

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void elf_check(unsigned char *e_ident);
void _magic(unsigned char *e_ident);
void _class(unsigned char *e_ident);
void _data(unsigned char *e_ident);
void _version(unsigned char *e_ident);
void _abi(unsigned char *e_ident);
void _osabi(unsigned char *e_ident);
void _type(unsigned int e_type, unsigned char *e_ident);
void _entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif /*ELF_H*/
