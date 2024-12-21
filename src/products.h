//
//  products.h
//  Beyond_prj_test
//
//  Created by 송현준 on 2024/12/21.
//

#ifndef products_h
#define products_h

#include <stdio.h>

// 상품 구조체
typedef struct {
    int id;
    char name[50];
    float price;
} Product;

void displayProducts();

#endif /* products_h */
