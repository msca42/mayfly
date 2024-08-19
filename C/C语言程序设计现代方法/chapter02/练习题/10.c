/*
 * Name: 10.c
 * Purpose: 通过减少空格缩短语句
 * Author: mayfly
 */
#include <stdio.h>
int main(void){int height,length,width,volume,weight;height=8;length=12;width=10;volume=height*length*width;weight=(volume+165)/166;printf("Dimensions: %dx%dx%d\n",length,width,height);printf("Volume (cubic inches): %d\n", volume);printf("Dimensional weight (pounds): %d\n", weight);return 0;}
/* 关键字右侧的空格通常是必不可少的*/