# C Primer Plus 5th 中文版章后编程练习
以前从没做过编程练习,趁着暑假复习C/C++的时间手动过一遍.

###Environment ![](http://www.easyicon.net/api/resizeApi.php?id=1200823&size=32)
- Visual Studio 2013 IDE

###Attention ![](http://www.easyicon.net/api/resizeApi.php?id=1200863&size=32)
- 极少数情况您可能需要自行添加`fflush(stdin);`
- chapter10.13.8要求使用VLA而cl.exe不支持VLA,所以您可能需要`gcc chapter10-8.c -o chapter10-8 -std=c99 -w`