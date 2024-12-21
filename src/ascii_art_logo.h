//
//  ascii_art_logo.h
//  Beyond_prj_test
//
//  Created by 송현준 on 2024/12/21.
//

#ifndef ascii_art_logo_h
#define ascii_art_logo_h

# include <sys/ioctl.h>
# include <unistd.h>
# include <string.h> // strlen 함수 포함

// 함수 선언
void get_console_size_logo(int* width, int* height);
void print_ascii_art_logo();

#endif /* ascii_art_logo_h */
