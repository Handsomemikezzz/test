
#include <stdio.h>
//for (初始参数；循环判断条件；每轮的动作){循环体内的执行内容}
/*
int main()
{  
    int n ;
    scanf("%d",&n);
    int res=1;
    int i =1;
    // for (i=1;i<=n;i++){
    //     res*=i ;
    // }
    for(i=n;i>1;i--){
        res*=i;
    }
printf("%d,%d\n",n,res);
}
*/

//---------使用break  与continue 来控制循环-------break 跳出循环，continue 跳过此次循环

//判断是否是素数
/*
int main(){
    int x ;
    scanf("%d",&x);
    int  i = 1 ;
    for (i=2;i<x;i++){
        if(x%i==0){
            printf("是素数\n");
            break;}
        else{
                printf("不是素数\n");
                break;
            }
    }
}*/


//------输出100内的素数 prime-----
// int main(){
//     int x ;
//     int i ;
//     int count=0;
//     for(x=1;x<=100;x++){
//         int isprime =1;
//         for (i=2;i<x;i++){
//             if(x%i==0){
//                 isprime=0;
//                 break;;
//             }
//         }
//         if (isprime==1){
//             count++;
//             printf("%d ",x);
//         }
//     }
//}
//-----goto out 可以直接跳到out的地方

//循环联系题  前n项求和----------------由级数求和知，结果为六分之兀方
// int main()
// {   int n;
//     printf("请输入一个数");
//     scanf("%d",&n);
//     // printf("请输入一个数");
//     int i ;
//     double sum=0.0;
//     for (i=1;i<=n;i++){
//         sum+=1.0/(i*i);
//     }
//     printf("前%d个自然数的平方倒数和为%f",n,sum);
// }


//求最大公约数--------------------------
/*
int main()
{
    int a,b;
    printf("请输入两个数：");
    scanf("%d%d",&a,&b);
    int i;
    while(b!=0){
        i=a%b;
        a=b;
        b=i;
        printf("%d,%d,%d\n",a,b,i);
    }
    printf("\n最大公约数为%d\n",a);
    return 0;

}

int main()
{
    int a;
    int count=0;
    scanf("%d",&a);
    int i,j,k;
    i=a;
    while (i<=a+3)
    {   
        j=a;
        while (j<=a+3)
        {   k=a;
            while (k<=a+3)
            {
                
                if (i!=j&&j!=k&&i!=k)
                {   count++;
                    printf("%d%d%d",i,j,k);
                    if(count==6){printf("\n");
                        count=0;}
                    else{printf(" ");}
                    
                }
                k++;
            }
            
            j++;
        }
        
        i++;
    }
    
}
*/

//--------求解水仙花数---一个n位的正整数的每个位上的数字的n次之和等于它本身，其中n>=3
// int main()
// {
//     int n ;
//     int i ;
//     printf("请输入n的位数:");
//     scanf("%d",&n);
//     int up_lim=1;
//     for (i=1;i<n;i++){up_lim*=10;}
//     for (i=up_lim;i<up_lim*10;i++){
//         int j=i;
//         int sum= 0 ;
//         do
//         {
//             int every=j%10;
//             j/=10;
//             int first =every;
//             int k =1;
//             while (k<n)
//             {
//                 first*=every;
//                 k++;
//             }
//         sum+=first;    
//         } while (j>0);
//         if(sum==i){
//             printf("%d\n",i);
//         }
//     }
// }

//---------来自chatgpt的水仙花数，也没啥，就是用了个pow函数来计算幂指数-----
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n;
//     printf("请输入n的位数;");
//     scanf("%d", &n);

//     int up_lim = pow(10, n); // 上界为 10 的 n 次方
//     for (int i = 1; i < up_lim; i++) {
//         int j = i;
//         int sum = 0;
//         do {
//             int every = j % 10;
//             j /= 10;
//             int first = pow(every, n); // 使用 pow 函数计算每位数字的 n 次方
//             sum += first;
//         } while (j > 0);

//         if (sum == i) {
//             printf("%d\n", i); // 输出水仙花数并换行
//         }
//     }

//     return 0;
// }



//--寻找区间m,n内的素数-------------------------------
// int main()
// {
//     int m,n ;
//     int i ,j;
//     int count=0;
//     int sum=0;
//     printf("请输入两个数m,n并且m<n:"); 
//     scanf("%d%d",&m,&n);
//     if(m==1){m=2;}
//     for(i=m;i<n;i++){
//         int isprime=1;
//         for(j=2;j<i;j++){
//             if(i%j==0){
//                 isprime=0;
//                 break;
//             }
//         }
//         if (isprime==1)
//         {   count++;
//             sum+=i;
//             printf("%d\n",i);
//         }
        
//     }
//     printf("共有%d个素数,他们的和为%d",count,sum);
// }



//----