//
//  carts.c
//  Beyond_prj_test
//
//  Created by 송현준 on 2024/12/21.
//

#include <stdio.h>
#include <string.h>

#include "carts.h"

// 장바구니 데이터
CartItem cart[50];
int cartCount = 0;

// 장바구니에 추가
void addToCart(int productId, int quantity) {
    for (int i = 0; i < 50; i++) {
        if (products[i].id == productId) {
            // 이미 장바구니에 있는지 확인
            for (int j = 0; j < cartCount; j++) {
                if (cart[j].product.id == productId) {
                    cart[j].quantity += quantity;
                    printf("장바구니에 추가되었습니다: %s x %d\n", products[i].name, quantity);
                    return;
                }
            }
            // 새로운 상품 추가
            cart[cartCount].product = products[i];
            cart[cartCount].quantity = quantity;
            cartCount++;
            printf("장바구니에 추가되었습니다: %s x %d\n", products[i].name, quantity);
            return;
        }
    }
    printf("상품 ID를 찾을 수 없습니다.\n");
}

// 장바구니 보기
void viewCart() {
    if (cartCount == 0) {
        printf("장바구니가 비어 있습니다.\n");
        return;
    }
    printf("\n--- 장바구니 ---\n");
    for (int i = 0; i < cartCount; i++) {
        printf("이름: %s | 수량: %d | 합계: $%.2f\n",
               cart[i].product.name,
               cart[i].quantity,
               cart[i].quantity * cart[i].product.price);
    }
    printf("-----------------\n");
}
