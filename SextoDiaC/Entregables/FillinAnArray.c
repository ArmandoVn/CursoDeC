#include<stdio.h>
#include<stdlib.h>

int main(){
	long long int nums[90] = {1, 3, 5};

	for (int i = 2; i < 90; i++)
	{
		nums[i+1] = nums[i-2] + nums[i-1] + nums[i];
		printf("%9lu\t", nums[i+1]);
	}
}