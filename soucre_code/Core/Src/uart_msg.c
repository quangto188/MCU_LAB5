/*
 * uart_msg.c
 *
 *  Created on: Dec 21, 2023
 *      Author: todiu_cp4n01g
 */

#include "main.h"
#include "uart_msg.h"

extern UART_HandleTypeDef huart1;

int _write(int file, char *ptr, int len)
{
	HAL_UART_Transmit(&huart1, (uint8_t*)ptr, len, HAL_MAX_DELAY);
	return len;
}

