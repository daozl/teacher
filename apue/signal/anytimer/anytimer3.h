#ifndef ANYTIMER_H__
#define ANYTIMER_H__


typedef void at_jobfunc_t(void *);

 at_addjob(struct timeval * ,at_jobfunc_t *jobp,void *arg);
/*
 *	return	>= 0			成功，返回指定任务ID
 *			== -EINVAL		失败，参数非法
 *			== -ENOMEM		失败，内存分配失败
 *			== -ENOSPC		失败，任务数组满
 * */

int at_addjob_repeat(int sec,at_jobfunc_t *jobp,void *arg);
/*
 *	同上
 *
 * */

int at_canceljob();
/*
 *	return 	== 0			成功，指定任务已取消
 *			== -EINVAL      失败，参数非法
 *			== -EBUSY		失败，指定任务已经完成
 *			== -ECANCELED	失败，指定任务早已被取消		
 * */

int at_waitjob(int id);
/*
 *	return 	== 0			成功，指定任务已释放
 *			== -EINVAL      失败，参数非法
 *			== -EBUSY       失败，指定任务为周期性任务
 *
 * */

#endif


