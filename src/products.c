//
//  products.c
//  Beyond_prj_test
//
//  Created by 송현준 on 2024/12/21.
//

#include <stdio.h>
#include <string.h>

#include "products.h"

// 상품 데이터 (예제 데이터)
Product products[] = {
    {1, "Laptop", 1000.0},
    {2, "Smartphone", 700.0},
    {3, "Headphones", 100.0},
    {4, "Keyboard", 50.0},
    {5, "Mouse", 25.0}
};

int productCount = sizeof(products) / sizeof(products[0]);

// 상품 목록 출력
void displayProducts() {
    printf("\n--- 상품 목록 ---\n");
    for (int i = 0; i < productCount; i++) {
        printf("ID: %d | 이름: %s | 가격: $%.2f\n", products[i].id, products[i].name, products[i].price);
    }
    printf("-----------------\n");
}
