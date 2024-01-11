/*
 * uart.c
 *
 *  Created on: Jan 10, 2024
 *      Author: danny
 */


#include "uart.h"

/* privite한 변수 선언*/
UART_HandleTypeDef *huart;

void initUart(UART_HandleTypeDef *inHuart) {
	huart = inHuart;
}

int _write(int file, char *p, int len) {
	HAL_UART_Transmit(huart, (uint8_t *)p, len, len);
	return len;
}
