#include <stdio.h>
#include <sys/ioctl.h>
#include <stdlib.h>
#include <string.h> // strlen 함수 포함

#include "src/ascii_art_console.h"
#include "src/ascii_art_console.c"
#include "src/ascii_art_logo.h"
#include "src/ascii_art_logo.c"
#include "src/home_controller.h"
#include "src/home_controller.c"

int main(void) {
    displayHome();
    
     char command;
     while(1){
         scanf("%c", &command);
         getchar(); // 두 글자로 입력 방지
         
         if(command == 'E'){
             printf("이용해주셔서 감사합니다. 안녕히 가세요\n");
             system("exit");
             break;
         }else{
             controller_home(command);
         }
         
     }
    return 0;
}
