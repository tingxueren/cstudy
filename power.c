
/*************************
 *   計算 2 的 n 次方 
 *************************/

#include <stdio.h>                  // 導入IO處理函式庫

/* 計算 n 次方 */
power(int base, int level)          // 接受變量 base(基底), level(級數)
{                                   // 函式區塊開始
    int result;                     // 宣告輸出使用的變量

    if (level != 1)                // 判斷: 如果輸入變量值不等於1
    {                               // 判斷區塊開始
        int i = 1;
        result = base;
        for(i = 1; i < level; ++i)  // 程式運算
        {     
           result *= base;
         }                  
        
    }                               // 判斷區塊結束
    else                            // 其他情形
    {                               // 判斷區塊開始

        result = 1;                 // 程式運算
        
    }                               // 判斷區塊結束

    // ex: 輸入 2 得 2**2 = 4
    printf("輸入 %d 得 %d^%d = %d", level, base, 
           level, result);        // 印出結果至螢幕
    
    return result ;                   // 返回結果
}                                   // 函式區塊結束


/* 接受使用者輸入並印出結果 */
int main()                              // 主程式
{                                   // 函式區塊開始
    int input;                      // 宣告輸入使用的變量
    printf("请输入数字:");
    scanf("%d", &input);           // 讀入數值到 input 變量
    printf("\n");                  //
    power(2, input);              // 呼叫 power 函式, 以 2 為基底
    return 0;                
}                                // 函式區塊結束
