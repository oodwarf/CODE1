#include <stdio.h>
#include <stdlib.h>

int main()
{
    //����֮��
    //����һ����������nums��һ������Ŀ��ֵtarget�����ڸ��������ҳ���ΪĿ��ֵtarget�����������������������ǵ������±ꡣ
    /*ʾ����
    ����:nums=[2,7,11,15],target=9
    ���:[0,1]
    ����:��Ϊnum[0]+num[1]==9,����[0,1]
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
 /*����
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
