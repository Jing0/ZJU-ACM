/*
 * =====================================================================================
 *
 *       Filename:  2350.c
 *
 *    Description:  
 *    It is said that 90% of frosh expect to be above average in their class. You are to provide a reality check.
 *    Input
 *    The first line of standard input contains an integer C, the number of test cases. C data sets follow. Each data set begins with an integer, N, the number of people in the class (1 <= N <= 1000). N integers follow, separated by spaces or newlines, each giving the final grade (an integer between 0 and 100) of a student in the class.
 *    Output
 *    For each case you are to output a line giving the percentage of students whose grade is above average, rounded to 3 decimal places.
 *    Sample Input
 *    5
 *    5 50 50 70 80 100
 *    7 100 95 90 80 70 60 50
 *    3 70 90 80
 *    3 70 90 81
 *    9 100 99 98 97 96 95 94 93 91
 *    Sample Output
 *    40.000%
 *    57.143%
 *    33.333%
 *    66.667%
 *    55.556%
 *
 *        Created:  05/01/2015 01:52:55
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (http://jackiekuo.com), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int t,n,i,a[1010],count;
	long sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0,sum=0;i<n;++i){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		for(i=0,count=0;i<n;++i)
			if(a[i]*n>sum)
				++count;
		printf("%.3lf%%\n",(double)(count*100)/n);
	}
	return 0;
}
