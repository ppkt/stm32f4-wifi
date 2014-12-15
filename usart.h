#ifndef __USART_H__
#define __USART_H__
#include <stm32f4xx.h>
#include "stm32f4xx_gpio.h"
#include <stm32f4xx_usart.h>
#include <stm32f4xx_rcc.h>
#include <misc.h>


void USART1_IRQHandler(void);

void USART1_Init();
void USART2_Init();

void usart1_print(char* c);
void usart2_print(char* c);

void usart_string_append(char c);
void usart_clear_string();

volatile char* usart_get_string();
volatile u8 usart_get_string_length();

#endif