/*冒泡排序bubble_sort*/
void my_bubble_sort(int *num,int len)
{
	//Jcx_test
	//23-03-03-14-24test
	int i,j,tmp;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				tmp=num[j];
				num[j]=num[j+1];
				num[j+1]=tmp;
			}
		}
	}
}

/*Hello Distributed*/

/*2023/03/01*/
