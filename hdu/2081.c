/*
 * =====================================================================================
 *
 *       Filename:  2081.c
 *
 *    Description:  
 *    Problem Description
 *    大家都知道，手机号是一个11位长的数字串，同时，作为学生，还可以申请加入校园网，如果加入成功，你将另外拥有一个短号。假设所有的短号都是是 6+手机号的后5位，比如号码为13512345678的手机，对应的短号就是645678。
 *    现在，如果给你一个11位长的手机号码，你能找出对应的短号吗？
 *    Input
 *    输入数据的第一行是一个N(N <= 200)，表示有N个数据，接下来的N行每一行为一个11位的手机号码。
 *    Output
 *    输出应包括N行，每行包括一个对应的短号，输出应与输入的顺序一致。
 *    Sample Input
 *    2
 *    13512345678
 *    13787654321
 *    Sample Output
 *    645678
 *    654321
 *
 *        Version:  1.0
 *        Created:  04/10/2014 23:30:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int n,i;
	char phone[12];
	while(scanf("%d",&n)!=EOF)
		while(n--){
			scanf("%s",phone);
			putchar('6');
			for(i=6;i<11;i++)
				printf("%c%s",phone[i],(i==10)?"\n":"");
		}
	return 0;
}
