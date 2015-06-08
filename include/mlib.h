#ifndef MLIB_H
#define MLIB_H

// Define some helpful keywords.

#ifndef NULL
#define NULL ((void*) 0)
#endif

#ifndef bool
#define bool _Bool
#endif

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

// Define the disk functions.
char* get_file_list(char* buffer);
_Bool load_file(char* string, unsigned short location);
_Bool write_file(char* filename, char* buffer, unsigned short bytestowrite);
_Bool file_exists(char* filename);
void create_file(char* filename);
void remove_file(char* filename);
void rename_file(char* old_filename, char* new_oldname);
short get_file_size(char* filename);

// Define the keyboard functions.

// Define the screen functions.
void print_string(char* string);

#endif
