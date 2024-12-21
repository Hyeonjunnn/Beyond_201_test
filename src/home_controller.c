//
//  home_controller.c
//  Beyond_prj_test
//
//  Created by 송현준 on 2024/12/21.
//

#include <stdlib.h>

#include "home_controller.h"
#include "ascii_art_console.h"
#include "ascii_art_logo.h"
#include "products.h"
#include "products.c"
#include "carts.h"
#include "carts.c"

void displayHome(){
    system("clear");
    print_ascii_art();
    
    printf("[H] : 홈\n");
    printf("[L] : 로그인\n");
    printf("[S] : 상품 목록\n");
    printf("[C] : 장바구니 목록\n");
    printf("[E] : 종료\n");
}

void displayController(){
    printf("[H] : 홈\n");
    printf("[L] : 로그인\n");
    printf("[S] : 상품 목록\n");
    printf("[C] : 장바구니 목록\n");
    printf("[E] : 종료\n");
}

void controller_home(const char command){
    
    switch(command){
        case 'H':
            displayHome();
            break;
        case 'L':
            printf("로그인 화면으로\n");
            break;
        case 'S':
            system("clear");
            print_ascii_art_logo();
            displayProducts();
            displayController();
            break;
        case 'C':
            viewCart();
            break;
        default:
            printf("잘못된 입력입니다. 다시 입력해주십시오.\n");
            break;
    }
}
