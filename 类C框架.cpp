函数类C语言描述

一大堆初始化的函数
set_up()
{
	T1,T2初始化
	T0初始化
	4/6个GPIO初始化
	oled初始化
	MP3初始化

}

int A_score, B_score;

主函数循环等待
Main() {
	while (1) {	}
}

外部中断A.击中服务函数{
	比赛计时.pause()
	if B.击中发生在0.25s前且2s内
	{	
		T2定时器复位
		MP3.desplay("A击中比B慢0.25s以上，无效")
		return 
	}
	if B.金属衣 被击中
	{
		MP3.despaly("bi~~~~")
		led_A.on(2秒)
		T1定时器启动//后面B击中需要计算时间差
	}
	else
	{
		MP3.desplay("bi~~~~~A击中无效部位")
		led_A无效.on(2秒)
		T1定时器启动
	}
}

外部中断B击中服务函数{
	比赛计时.pause()
	if A.击中发生在0.25s前且2s内
	{
		T1定时器复位
		MP3.desplay("B击中比A慢0.25s以上，无效")
		return
	}
	if A.金属衣 被击中
	{
		MP3.despaly("bi~~~~")
		led_B.on(2秒)
		T2定时器启动//后面B击中需要计算时间差
	}
	else
	{
		MP3.desplay("bi~~~~~B击中无效部位")
		led_B无效.on(2秒)
		T2定时器启动
	}
}

MP3.desplay(id) {
	switch (id)
	{
	case 1: 播放本地音频文件1.MP3
		……
		……
	default:
		break;
	}
}


遥控器按键相应函数：
按键A加分中断函数() {
	A_score++;
	数码管A显示(A_score);
}
按键B加分中断函数();
按键A减分中断函数();
按键B减分中断函数();
按键计时暂停/开始函数();
按键计时复位函数();
按键双方比分复位函数() {
	A_score = 0;
	B_score = 0;
	数码管B显示(0);
	数码管B显示(0);
}

在以上按键函数中会调用的一系列数码管操作函数：
数码管A显示(int score) {
	switch (score)
	{
	case 0: 
		Port=0xB7；
	……
	default:
		break;
	}
}
数码管B显示(0);

遥控器配置函数() 

定时器T3中断控制数码管显示比赛时间函数()

