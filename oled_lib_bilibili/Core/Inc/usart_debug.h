/*ʹ��˵����ʹ�ñ�׼���ض���printf()���� 
	1.���ô��ںʹ���handle
	2.����Ҫ�ĵط����usart_debug.hͷ�ļ�
	3.ʹ��printf()����--��֧�ָ�������� 
*/

#ifndef __USART_DEBUG_H
#define __USART_DEBUG_H

#define USART_DEBUG USART1			/*����ʹ�õĴ���*/
#define huart_debug huart1 			/*����ʹ�õĴ���handle*/ 

/*stm32cubemx���ô��ں��Զ����ɵ�ͷ�ļ��������������*/
#include "usart.h"

/*�ض�����Ҫʹ�õ���ͷ�ļ�*/ 
#include "stdio.h"

/*��֪����������c������ʹ�ð������ĺ���--��ʹ�ð�����ģʽ*/ 
//#pragma import(__use_no_semihosting)

/*���¶���__write����*/ 
int _write(int fd, char *ptr, int len);

/*����_sys_exit()�Ա���ʹ�ð�����ģʽ*/ 
void _sys_exit(int x);
#endif /*__USART_DEBUG_H*/  

