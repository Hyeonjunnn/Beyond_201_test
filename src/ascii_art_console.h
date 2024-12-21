//
//  ascii_art_console.h
//  Beyond_prj_test
//
//  Created by 송현준 on 2024/12/21.
//

#ifndef ASCII_ART_CONSOLE_H
# define ASCII_ART_CONSOLE_H

# include <sys/ioctl.h>
# include <unistd.h>
# include <string.h> // strlen 함수 포함

// 함수 선언
void get_console_size(int* width, int* height);
// void print_ascii_art(const char* ascii_art[], int art_width, int art_height);
void print_ascii_art();

#endif /* ascii_art_console_h */
