#include <stdio.h>
#include <stdlib.h>

int main()
{
    //两数之和
    //给定一个整数数组nums和一个整数目标值target，请在该数组中找出和为目标值target的那两个整数，并返回它们的数组下标。
    /*示例：
    输入:nums=[2,7,11,15],target=9
    输出:[0,1]
    解释:因为num[0]+num[1]==9,返回[0,1]
*/
    int nums[5]={5,9,11,32,8},i,j,target=19,flag=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(nums[i]+nums[j]==target)
            {
                printf("[%d,%d]\n",i,j);
                flag=1;
                break;
            }
            if(flag==1)
            break;
        }
    }
     return 0;
 /**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*力扣
 int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int i,j;
    static int arr[2];
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target)
            {
                arr[0]=i;
                arr[1]=j;
               return arr;
            }
        }
    }
    return 0;
}*/
}
