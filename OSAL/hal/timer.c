/****************************************************************************************
 * 文件名  ：timer.c
 * 描述    ：硬件定时器配置文件，为osal操作系统提供系统时钟，移植时需要修改的文件
 * 开发平台：
 * 库版本  ：
 ***************************************************************************************/
#include "timer.h"
#include "osal_timer.h"

//硬件定时器初始化，设定系统时钟
void OSAL_TIMER_TICKINIT(void)
{
	
}

//开启硬件定时器
void OSAL_TIMER_TICKSTART(void )
{

}

//关闭硬件定时器
void OSAL_TIMER_TICKSTOP(void )
{

}

//此处添加硬件定时器中断溢出函数，并调用系统时钟更新函数osal_update_timers()