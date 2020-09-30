#include "usart_debug.h"

/*重新定义__write函数*/
int _write(int fd, char *ptr, int len)
{
    HAL_UART_Transmit(&huart_debug, (uint8_t *)ptr, len, 0xFFFF);
    return len;
}

/*定义_sys_exit()以避免使用半主机模式*/
void _sys_exit(int x)
{
    x = x;
}