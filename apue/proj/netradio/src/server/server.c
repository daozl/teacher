

/*
 *	-C   指定测试频道号
 *	-M	 指定多播组 
 *	-P	 指定测试用的端口
 *	-F	 前台调试运行
 *	-H	 显示帮助	
 * */

int main()
{
	struct mlib_chn_st *list;
	int listsize;

	/*conf的处理*/

	/*socket初始化*/

	/*从medialib中获取频道列表信息*/
	ret = mlib_getchnlist(&list,&listsize);
	/*if error  syslog*/



	/*创建thr_list*/
	thr_list_create(list,listsize);
	


	/* 创建thr_channel 1:1*/

	for(i = 0 ; i < listsize; i++)
		thr_channel_create();	
	



	while(1)
		pause();


	exit(0);
}


