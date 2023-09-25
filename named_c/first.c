#include <stdio.h>
//-----年轻人第一个c语言程序
/*   int main()
{   
    printf("hello world  万事开头难");
    return 0;
}
*/
//----第二个-------
// int main()
// {   
//     printf("12+4=%d\n",19);//这里d%就是后面期待赋予的值，并未实现计算纠错
//     printf("12+4=%d",12+4);//吗的\n表示转行    printf打印的就是后面的值
//     return 0;
// }

//3---------引入变量 int ------
// int main()
// {
//     int a= 0 ;
//     printf("请输入您的付款金额");
//     scanf("%d",&a);//scanf函数扫描需要加变量前的&来寻找物理地址
//     const int amount =100;//const导致无法在以后的程序中修改amount
//     int change= amount - a;
//     printf("剩余%d元\n",change);
//     return 0 ;
// }
//操蛋的c语言所有的变量使用前必须先声明变量的值



//-------两数之和-------------
// int main()
// {
//     int chi = 0 ;
//     int cun = 0;
//     float high =0;
//     double tree = 3;
//     printf("请输入尺");
//     scanf("%d",&chi);
//     scanf("%lf",&tree);//对于浮点数，扫描需要lf
//     printf("请输入寸");
//     scanf("%d",&cun);
//     high = (chi +cun/12.0)*0.3048;//整数与浮点数放在一起运算的时候，会自动讲整数转换为浮点数
//     printf("身高为%f",high);//double 与 ffloat都表示浮点数，前者为双精度，后者为单精度
//     return 0 ;
// }


//----复合运算--------------
// int main()
// {
//     int count ;
//     int a = 1 ;
//     int b = 1 ;
//     printf("%d,%d",++a,b++);//在左边表示先自加再使用，在右边表示先使用再自加
// }
//------change
// int main()
// {
//     int a= 5 ;
//     int b = 2;
//     int c ;
//     c=a ;
//     a=b;
//     b=c;
//     printf("%d,%d",a,b);
// }

// int main()
// {   int a ,b;
//     printf("请输入两个数字");
//     scanf("%d %d",&a,&b);
//     int he = a+b;
//     int cha = a-b;
//     int ji = a*b;
//     float chu = a/b;
//     printf("%d,%d,%d,%f",he,cha,ji,chu);

// }

//---第二题----计算时间差----
// int main()
// {
//     int hour1 ,minute1;
//     int hour2 ,minute2;
//     printf("请输入起始时间");
//     scanf("%d %d",&hour1, &minute1);
//     printf("请输入结束时间");
//     scanf("%d %d",&hour2,&minute2);
//     int de = (hour2*60+minute2)-(hour1*60+minute1);
//     printf("相差%d小时%d分",de/60,de%60);
// }

//--------第三题 ------逆序数 --------
int main()
{
    int a;
    printf("输入一个正整数");
    scanf("%d",&a);
    int b,c,d;
    b= a/100;
    d= a%10;
    c= (a-b*100)/10;
    int result = d*100+c*10+b;
    printf("%d\n",result);

}