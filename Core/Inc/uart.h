/*
 * uart.h
 *
 *  Created on: Jan 10, 2024
 *      Author: danny
 */

#ifndef INC_UART_H_
#define INC_UART_H_

/* main.h을 선언 해줘야 stm기기와 핀에 대한 정의를 할 수 있음 */
#include "main.h"

// 변수 프로토타입 선언
void initUart(UART_HandleTypeDef *);	//UART 장치 초기화

#endif /* INC_UART_H_ */
