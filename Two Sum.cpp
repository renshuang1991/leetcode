int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int i, j, *twoSum;
	twoSum = (int *)malloc(2 * sizeof(int));
	for (i = 0; i < numsSize; i++)
	{
		for (j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				twoSum[0] = i;
				twoSum[1] = j;
				*returnSize = 2;
				return twoSum;
			}
		}
	
	}
	return NULL;
}
