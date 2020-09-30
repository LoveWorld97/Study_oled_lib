/*使用说明：使用标准库重定向printf()函数 
	1.配置串口和串口handle
	2.在需要的地方添加usart_debug.h头文件
	3.使用printf()函数--不支持浮点数输出 
*/

#ifndef __USART_DEBUG_H
#define __USART_DEBUG_H

#define USART_DEBUG USART1			/*配置使用的串口*/
#define huart_debug huart1 			/*配置使用的串口handle*/ 

/*stm32cubemx配置串口后自动生成的头文件，这里包含以下*/
#include "usart.h"

/*重定向需要使用到的头文件*/ 
#include "stdio.h"

/*告知连接器不从c库链接使用半主机的函数--不使用半主机模式*/ 
//#pragma import(__use_no_semihosting)

/*重新定义__write函数*/ 
int _write(int fd, char *ptr, int len);

/*定义_sys_exit()以避免使用半主机模式*/ 
void _sys_exit(int x);
#endif /*__USART_DEBUG_H*/  

