# 目录
### 实验四
[asciiJudge](#asciiJudge)</br>
[num2date](#num2date)</br>
[switch_Algorithm](#switch_Algorithm)</br>
### 实验五
[getchar](#getchar)</br>
[1+12+...](#1+12+...)</br>
[asciia2z](#asciia2z)</br>
### 实验六
[findFactory](#findFactory)</br>
[alphabetTriangle](#alphabetTriangle)</br>
[1+(1+2)+...](#1+(1+2)+...)</br>
### 实验七
[Fibonacci50](#Fibonacci50)</br>
[biggestInArray](#biggestInArray)</br>
[ExchangeArrayElements](#ExchangeArrayElements)</br>
### 实验八
[ringSqure](#ringSqure)</br>
[lowestMultipist&biggestDiviser](#lowestMultipist&biggestDiviser)</br>



## asciiJudge
###### 输入一个字符，请判断是字母、数字还是特殊字符。
利用ASCII码比较即可
[source](asciiJudge.cpp)

## num2date
###### 编写程序，输入任意一个1~7之间的整数，将他们转换成对应的表示星期几的英文单词，例如：1转换成Monday，7转换成Sunday。
好像switch 和 if 都行
[source](num2date.cpp)

## switch_Algorithm
###### 编程实现以下功能：读入两个运算数（data1和data2）及一个运算符（op），计算表达式data1 op data2的值，其中，op可为+、-、*、/（用switch语句实现）。
规定用``switch``语句了，那就用呗...
[source](switch_Algorithm.cpp)

## getchar
###### 输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。
一开始吓死我，我还以为要把中文字符也挑出来，那就关于字符数了，复杂度蹭蹭往上涨...老了眼花了
[source](getchar.cpp)

## 1+12+...
###### 输出小写字母的ASC||码对照表。
这没啥说的
[source](1+12+....cpp)

## asciia2z
###### 计算s=1+12+123+1234+12345的值。
好像忘了，多加了```math.h```，罪过
[source](asciia2z.cpp)

## findFactory
###### 输出100以内具有10个以上因子的整数，并输出它的因子。
**坑: 0%0 会死循环...调试了快一小时。真让人骂人(关键是编译还能pass...佛了)**
其实应该拿数组的，这样直接```a[].length>10```就行。
[source](findFactory.cpp)

## alphabetTriangle
###### 输出以下图形。</br>
							   A
							  ABC
							 ABCDE
							ABCDEFG
简单聊思路吧，每一行输出的数目是行数的奇数(2n-1)，然后是关于排版，只需要输出前面的(A前面的空格)，做循环每次输出一个空格。
[source](alphabetTriangle.cpp)

## 1+(1+2)+...
###### 求s=1+(1+2)+(1+2+3)+⋯+(1+2+3+⋯+n)，要求n从键盘输入。
做两次循环嵌套..
[source](1+(1+2)+....cpp)

## Fibonacci50
###### 编写程序，计算Fibonacci数列的前50项。</br>
这里面遇到了内存溢出问题，long int 也拉跨了，一开始想着可以用char把数字转换为字符串，这样无视溢出。但是后来与ASCII冲突。最后用float解决问题，虽然有点拉跨。
[source](Fibonacci50.cpp)

## biggestInArray
###### 长度为10的数组，编写程序找出其中的最大数及其在该数组中的位置。
[source](biggestInArray.cpp)

## ExchangeArrayElements
###### 将一个二维数组的行列元素互换，存放到另一个二维数组中。
[source](ExchangeArrayElements.cpp)

## ringSqure
###### 编写求圆的面积的函数，并调用该函数求出圆环的面积。
坑就是数据类型，计算的优先级
[source](ringSqure.cpp)

## lowestMultipist&biggestDiviser
###### 编写两个函数分别求两个整数的最大公约数和最小公倍数，用主函数调用两个函数并输出结果，两个整数由键盘输入。
需要知道两数的乘积其实是最大公约数和最小公倍数的乘积。这样的话就好算了，把最大公约数直接遍历，最小公倍数直接调用即可
[source](lowestMultipist&biggestDiviser.cpp)
