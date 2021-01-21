## 题目描述

假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.

## 输入描述:

```
一行，字符序列，包含A或B，输入以字符0结束。
```

## 输出描述:

```
一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
```

示例1

## 输入

[复制](javascript:void(0);)

```c
ABBABBAAB0
```

## 输出

[复制](javascript:void(0);)

```c
B
```

题解：

```c
#include<stdio.h>
int main()
{
    char ch;
    int sum1=0,sum2=0;
    while((ch = getchar()) != '0' && (ch != EOF))//通过getchar得到字符，在输入EOF时也会结束运行
    {
        if(ch=='A')
        {
            sum1=sum1+1;
        }
        if(ch=='B')
        {
            sum2=sum2+1;
        }
    }
    if(sum1>sum2)
    {
        printf("A");
    }
    if(sum1<sum2)
    {
        printf("B");
    }
    if(sum1==sum2)
    {
        printf("E");
    }
    return 0;
}
```

