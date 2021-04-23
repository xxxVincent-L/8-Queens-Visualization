#include "queen.h"
#include "dialog.h"

queen::queen()
{


}

/**
 * @brief queen::recursion
 * @param i     递归回溯的起点，无实际意义
 */
void queen::recursion(int i)
{
    int n=8;

    if(i>n)
    {   //递归出口（只能出小层递归）
        sum1++;
        out=false;
        return ;
    }

    for(int j=1;j<=n;j++)
    {
        if(!out&&sum1==(sum2+1))//
        {
            return ;
        }//出递归的重要步骤
        arr[i]=j;//遍历改行的每一列
        if(queen::judge(arr,i))
        {//判断当前皇后是否满足要求，满足则递归至下一层
            queen::recursion(i+1);
        }
    }//若是均不满足回到上一层递归
}

/**
 * @brief queen::judge
 * @param arr   数组的名字
 * @param n     第n行的皇后
 * @return
 */
bool  queen::judge(int arr[],int n)
{//判断函数，检测皇后位置是否合法
    for(int i=1;i<n;i++)
    {//将第n个皇后的位置，依次与之前的皇后进行合法性检查
        if(arr[i]==arr[n]||abs(n-i)==abs(arr[n]-arr[i]))//如果在同一行，同一列，或者是正斜线，反斜线，为假
            return false;
    }
    return true;
};
