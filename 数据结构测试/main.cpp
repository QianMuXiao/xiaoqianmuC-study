//
//  main.cpp
//  数据结构测试
//
//  Created by 萧芊牧 on 2019/7/27.
//  Copyright © 2019 萧芊牧. All rights reserved.
//

#include <iostream>
#include <stdio.h>



void testFun(int arr[], int count) // 类型退化了
{
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    printf("\n");
}
void testFun2(char s[])
{
    for (int i = 0; i < sizeof(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main()
{
   const int count = 15;
    // 类型 数组名称 [数组长度 ]数组长度必须为常量；
    int arr[count] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    char s[6] = "Hello";
    //char s[5] = {'H','e','l','l','o'};
    testFun(arr, count);
    testFun2(s);
    printf("%s\n", s);

//    printf("%d\n", sizeof(arr));
}
