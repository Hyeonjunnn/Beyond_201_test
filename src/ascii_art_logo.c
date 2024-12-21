//
//  ascii_art_logo.c
//  Beyond_prj_test
//
//  Created by 송현준 on 2024/12/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ascii_art_logo.h"

// 콘솔 크기 가져오기 함수
void get_console_size_logo(int* width, int* height) {
    struct winsize w;
    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &w) == -1) {
        perror("ioctl 실패");
        exit(1);
    }

    *width = w.ws_col;
    *height = w.ws_row;
}

// 아스키 아트를 출력하는 함수
// void print_ascii_art(const char* ascii_art[], int art_width, int art_height) {
void print_ascii_art_logo() {
    // 아스키 아트 로고
    const char* ascii_art[] = {
        "   ___        __        _     ",
        " /'___`\\    /'__`\\    /' \\    ",
        "/\\_\\ /\\ \\  /\\ \\/\\ \\  /\\_, \\   ",
        "\\/_/// /__ \\ \\ \\ \\ \\ \\/_/\\ \\  ",
        "   // /_\\ \\ \\ \\ \\_\\ \\   \\ \\ \\ ",
        "  /\\______/  \\ \\____/    \\ \\_\\",
        "  \\/_____/    \\/___/      \\/_/",
        "                              ",
        "                              "
    };

    // 아스키 아트 크기 계산
    int art_width = strlen(ascii_art[0]);
    int art_height = sizeof(ascii_art) / sizeof(ascii_art[0]);

    int console_width, console_height;
    get_console_size(&console_width, (&console_height) - 1);

    // 아트 출력 시작 위치 계산
    int start_x = (console_width - art_width) / 2;
    int start_y = (console_height - art_height) / 2;

    // 상단 구분선 출력
    for (int i = 0; i < console_width; i++) {
        printf("=");
    }
    printf("\n");

    // 빈 줄로 위쪽 여백 출력
    for (int i = 0; i < start_y; i++) {
        printf("\n");
    }

    // 아트 출력
    for (int i = 0; i < art_height; i++) {
        // 좌측 여백 출력
        for (int j = 0; j < start_x; j++) {
            printf(" ");
        }
        // 아트의 한 줄 출력
        printf("%s\n", ascii_art[i]);
    }

    // 빈 줄로 아래 여백 출력
    for (int i = 0; i < (console_height - (start_y + art_height)); i++) {
        printf("\n");
    }
    
    // 하단 구분선 출력
    for (int i = 0; i < console_width; i++) {
        printf("=");
    }
    printf("\n");
}
