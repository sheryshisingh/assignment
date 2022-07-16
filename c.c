// ASSIGNMENT 3

//  1....
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i = 1, n;
//     printf("how many time you want to print mysirG\n");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//        printf("mysirG\n");
//         i++;
//     }
//     return 0;
// }

// 2....
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i = 1,n;
//     printf("enter a no. you want to print natural no. upto it\n");
//     scanf("%d",&n);
//     while (i <= n)
//     {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }
// 3.....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,n;
//     i=n;
// printf("enter a no. .....  to print natural no. in reverse order\n");
// scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }
// 3....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     
// printf("enter a no. .....  to print natural no. in reverse order\n");
// scanf("%d",&n);
//int i=n;
//     while(i>=1)
//     {
//         printf("%d\n",i);
//         i--;
//     }
//     return 0;
// }
// 4....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=1,n;
// printf("enter a no. upto you want to print odd no.\n");
// scanf("%d",&n);
//     while(i<=n)
//     {
//         if(i%2!=0)
//         {
//             printf("%d\n",i);
//         }
//         i++;
//         }
//     return 0;
// }
// 5....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
    
//     printf("enter a no.");
//     scanf("%d",&n);
//      int i=n;
//     while(i>=1)
//     {
//       if(i%2!=0)
//       printf("%d\n",i);
//       i--;
//     }
//     return 0;
// }

// 6....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
// int n;
// printf("enter a no.\n");
// scanf("%d",&n);
//     int i=1;
//     while(i<=n)
//     {
//         if(i%2==0)
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }
// 7....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("enter a no.");
//     scanf("%d",&n);
//     int i=n;
//     while(i>=1)
//     {
//         if(i%2==0)
//         printf("%d\n",i);
//         i--;
//     }
//     return 0;
// }

// 8....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=1,n;
//     printf("enter a no.");
//     scanf("%d",&n);
    
//     while(i<=n)
//     {
//         printf("%d\n",i*i);
//         i++;
//     }
//     return 0;
// }

// 9....
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=1,n;
//  printf("enter a no.");
//    scanf("%d",&n);
//     while(i<=n)
//     {
//        printf("%d\n",i*i*i);
//        i++;
//     }
//     return 0;
// }

// 10....
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=1,n;
 printf("enter a no.");
 scanf("%d",&n);
    while(i<=10)
    {
       printf("%dX%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}
