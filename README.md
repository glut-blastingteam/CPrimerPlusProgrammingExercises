# C Primer Plus 5th 中文版章后编程练习
以前从没做过编程练习,趁着暑假复习C/C++的时间手动过一遍.

###Environment ![](https://raw.githubusercontent.com/racaljk/CPrimerPlusProgrammingExercises/master/icon/2.png)
- Visual Studio 2013 IDE

###Attention ![](https://raw.githubusercontent.com/racaljk/CPrimerPlusProgrammingExercises/master/icon/1.png)
- 极少数情况您可能需要自行添加`fflush(stdin);`
- chapter10-8,chapter10-13:要求使用VLA而cl.exe不支持VLA,所以您可能需要`gcc file.c -o file -std=c99 -w`
- chapter11-14:您可能需要修改`#define INTMAX_LEN 10`为合适的数值,具体大小请参考`#include <limits.h>`中定义的`INT_MAX`位数.