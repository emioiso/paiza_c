include <stdio.h>
int	main(void)
{
	int num[12] = {
		1, 3, 5, 1, 2, 3, 6, 6, 5, 1, 4
	};

	int count = 0;
    count =  sizeof(num) / sizeof(num[0]);
    // printf("%d\n",count);

    int tmp = 0;
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	int ans[12];
	//	並べ替え結果の表示
		for (int i= 0 ; i < count; i++)
	{
// 		printf("num[%d] = %d\n", i,num[i]);

        if(i == count - 1){
            // printf("aaaaaaaaaa");
            break;
		} else if(num[i] != num[i + 1]){
		    ans[i] =  num[i + 1];
		  //  printf("ans[%d] = %d\n",i,ans[i]);
		    printf("%d\n",ans[i]);
// 		} else if(i == count - 1){
//             printf("aaaaaaaaaa");
		}
	}

	return (0);
}
