﻿#include<stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) putchar(' ');
		for (int j = 0; j < 2 * i + 1; j++) putchar('*');
		putchar('\n');
	}
}