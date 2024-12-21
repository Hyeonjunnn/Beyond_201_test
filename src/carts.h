//
//  carts.h
//  Beyond_prj_test
//
//  Created by 송현준 on 2024/12/21.
//

#ifndef carts_h
#define carts_h

#include <stdio.h>
#include "products.h"

// 장바구니 구조체
typedef struct {
    Product product;
    int quantity;
} CartItem;

void addToCart(int productId, int quantity);
void viewCart();

#endif /* carts_h */
