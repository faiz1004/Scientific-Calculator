// // #include<stdio.h>
// // #include<conio.h>
// // #include<math.h>
// // #define PI 3.141
// // #define MAX 180
// // #include<stdlib.h>
// // #include<string.h>
// // int x=0,result=0;
// // void add(void);
// // void sub(void);
// // void mul(void);
// // void div(void);
// // void clear(void);
// // void sine(void);
// // void cosine(void);
// // void sec(void);
// // void cosec(void);
// // void tangent(void);
// // void cotangent(void);
// // void cube(void);
// // void square(void);
// // void sqroot(void);
// // void mod(void);
// // int menu(void);
// // void main()
// // {
// // char name[20],password[20];
// // int r;
// // clrscr();
// // printf("enter the name of canditate:");
// // gets(name);
// // printf("enter the password:");
// // gets(password);
// // r=strcmp(name,password);
// // getch();
// // while(1)
// // {
// //  clrscr();
// //   textcolor(BLUE);
// //  cprintf("\n\nresult  : %d\n",result);
// //  scanf("%d",&result);
// //  getch();

// // switch(menu())
// // {
// // case 1:
// //    add();
// //    x=1;
// //    break;
// // case 2:
// //   sub();
// //   x=1;
// //   break;
// // case 3:
// //   mul();
// //   x=1;
// //   break;
// // case 4:
// //    div();
// //    x=1;
// //    break;
// // case 5:
// //     mod();
// //     x=1;
// //     break;
// // case 6:
// //     clear();
// //     x=0;
// //     break;
// // case 7:
// //      sine();
// //      break;
// // case 8:
// //      cosine();
// //      break;
// // case 9:
// //      tangent();
// //      break;
// // case 10:
// //      cotangent();
// //      break;
// // case 11:
// //       sec();
// //       break;
// // case 12:
// //      cosec();
// //      break;
// // case 14:
// //      cube();
// //      break;
// // case 15:
// //      square();
// //      break;
// // case 16:
// //       sqroot();
// //       break;
// // case 13:
// //       exit(0);
// // default:
// //       printf("WRONG CHOICE :   SELECT AGAIN:  \n");
// //       break;
// // }
// // getch();
// // } }
// //  int menu(void)
// // {

// //     int m;
// //      printf("\n# # # # # # # # # # # # # # # # # # # ");
// //      printf("\n# 1        add                      # ");
// //      printf("\n# 2        sub                      # ");
// //      printf("\n# 3        mul                      # ");
// //      printf("\n# 4        div                      # ");
// //      printf("\n# 5        mod                      # ");
// //      printf("\n# 6       clear                     # ");
// //      printf("\n# 7        sin                      # ");
// //      printf("\n# 8        cos                      # ");
// //      printf("\n# 9        tan                      # ");
// //      printf("\n# 10       cot                      # ");
// //      printf("\n# 11       sec                      # ");
// //      printf("\n# 12      cosec                     # ");
// //      printf("\n# 13       exit                     # ");
// //      printf("\n# 14        ***                     # ");
// //      printf("\n# 15       **                       # ");
// //      printf("\n# 16       sqrt                     # ");
// //      printf("\n# # # # # # # # # # # # # # # # # # # ");
// //      printf("\n\nenter a option:  ");
// //      scanf("%d",&m);
// //     return m;
// //     }
// // void add()
// // {
// // int a,b;
// //      if(x)
// //      { textcolor(GREEN);
// //      cprintf("enter a number :  ");
// //      scanf("%d",&a);
// //      result=result+a;
// //      printf("result =%d",result);
// // }
// // else
// // {     textcolor(GREEN);
// //      printf("enter two number:    ");
// //      scanf("%d%d",&a,&b);
// //      result=a+b;
// //      cprintf("result   =  %d",result);
// //      }

// //  }
// //  void sub()
// // {
// // int a,b;
// //       if(x)
// //       {textcolor(GREEN);
// //       printf("enter a number:     ");
// //       scanf("%d",&a);
// //       result=result-a;
// //       cprintf("result  =  %d",result);
// //       }
// //       else
// //       {textcolor(GREEN);
// //       printf("enter two number:    ");
// //       scanf("%d%d",&a,&b);
// //       result=a-b;
// //       cprintf("result   =%d",result);
// //       }
// //  }
// // void mul()
// // {

// // 	int a,b;
// // 	if(x)
// // 	{textcolor(GREEN);
// // 	printf("enter a number:   ");
// // 	scanf("%d",&a);
// // 	result=result*a;
// // 	cprintf("result    =%d",result);
// // 	}
// // 	else
// // 	{textcolor(GREEN);
// // 	printf ("enter two number :   ");
// // 	scanf("%d%d",&a,&b);
// // 	result=a*b;
// // 	cprintf("result   = %d",result);
// // 	}
// // }
// // void div()
// // {
// // float a,b,finalresult;
// // 	    if(x)
// // 	       {   textcolor(GREEN);
// // 	       printf("enter a number:  ");
// // 	       scanf("%f",&a);
// // 	       result=result/a;
// // 	       cprintf("result  =%d",result);
// // 	       }
// // 	 else
// // 	      { textcolor(GREEN);
// // 	      printf("enter two number:  ");
// // 	      scanf("%f%f",&a,&b);
// // 	      result=a/b;
// // 	      cprintf("result   = %f",result);
// // 	      }
// // }
// // void mod()
// // {
// // int a,b;
// //  if(x)
// //  {  textcolor(GREEN);
// //   printf("enter  a number :   ");
// //   scanf("%d",&a);
// //   result=result%a;
// //   cprintf("result  =   %d",result);
// //   }
// //   else
// //   {textcolor(GREEN);
// //   printf("enter two number:   ");
// //   scanf("%d%d",&a,&b);
// //   result=a%b;
// //   cprintf("result  = %d",result);
// //  }
// //  }
// //  void clear()
// //  {
// //  printf("DATA IS CLEARED: \n");
// //  result=0;
// //  x=0;
// //        }
// //     void sine()
// //     {
// //       textcolor(RED);
// //     int angle;
// //     float m,n;
// //     cprintf("enter the angle:  ");
// //     scanf("%d",&angle);
// // 	    n=(PI/MAX)*angle;
// // 	    m=sin(n);
// // 	cprintf("value: %f",m);

// // 	}
// // 	void cosine()
// // 	{textcolor(RED);
// // 	int angle;
// // 	float m,n;
// // 	cprintf("enter the angle:  ");
// // 	scanf("%d",&angle);
// // 	  n=(PI/MAX)*angle;
// // 	  m=cos(n);
// // 	  cprintf("value   :  %f",m);
// // 	  }
// // 	  void tangent()
// // 	  {textcolor(RED);
// // 	  int angle;
// // 	  float m,n;
// // 	  cprintf("enter the angle:  ");
// // 	  scanf("%d",&angle);
// // 	    n=(PI/MAX)*angle;
// // 	    m=tan(n);
// // 	    cprintf("value   :   %f ",m);
// // 	    }
// // 	    void cotangent()
// // 	    {textcolor(RED);
// // 	    int angle;
// // 	    float m,n;
// // 	    cprintf("enter the angle:  ");
// // 	    scanf("%d",&angle);
// // 	       n=(PI/MAX)*angle;
// // 	       m=1/tan(n);
// // 	       cprintf("value : %f",m);
// // 	       }
// // 	       void sec()
// // 	       {textcolor(RED);
// // 	    int angle;
// // 	    float m,n;
// // 	    cprintf("enter the angle:  ");
// // 	    scanf("%d",&angle);
// // 	       n=(PI/MAX)*angle;
// // 	       m=1/cos(n);
// // 	       cprintf("value : %f",m);
// // 		       }
// // 	      void cosec()
// // 	      { textcolor(RED);
// // 	    int angle;
// // 	    float m,n;
// // 	    cprintf("enter the angle:  ");
// // 	    scanf("%d",&angle);
// // 	       n=(PI/MAX)*angle;
// // 	       m=1/sin(n);
// // 	       cprintf("value : %f",m);
// // 	       }
// //    void cube()
// //    { textcolor(RED);
// //    int m,n;
// //    printf("enter the number:");
// //    scanf("%d",&n);
// //    m=n*n*n;
// //    cprintf("result=%d",m);
// //    }
// //      void square()
// //        { textcolor(RED);
// //    int m,n;
// //    printf("enter the number:");
// //    scanf("%d",&n);
// //    m=n*n;
// //    cprintf("result=%d",m);
// //    }
// //    void sqroot()
// //      {textcolor(RED);
// //    int m,n;
// //    printf("enter the number:");
// //    scanf("%d",&n);
// //    m=sqrt(n);
// //    cprintf("result=%d",m);
// //    }

// #include <iostream>
// #include <cmath>
// #include <cstdlib>
// #include <string>
// #define PI 3.141
// #define MAX 180

// double result = 0;
// bool isResultInitialized = false;

// void add();
// void sub();
// void mul();
// void div();
// void clear();
// void sine();
// void cosine();
// void sec();
// void cosec();
// void tangent();
// void cotangent();
// void cube();
// void square();
// void sqroot();
// void mod();
// int menu();

// int main() {
//     std::string name, password;
//     int choice;

//     std::cout << "Enter the name of candidate: ";
//     std::getline(std::cin, name);
//     std::cout << "Enter the password: ";
//     std::getline(std::cin, password);

//     if (name != password) {
//         std::cout << "Access Denied.\n";
//         return 1;
//     }

//     while (true) {
//         std::cout << "\nResult: " << result << "\n";

//         choice = menu();
//         switch (choice) {
//             case 1: add(); break;
//             case 2: sub(); break;
//             case 3: mul(); break;
//             case 4: div(); break;
//             case 5: mod(); break;
//             case 6: clear(); break;
//             case 7: sine(); break;
//             case 8: cosine(); break;
//             case 9: tangent(); break;
//             case 10: cotangent(); break;
//             case 11: sec(); break;
//             case 12: cosec(); break;
//             case 14: cube(); break;
//             case 15: square(); break;
//             case 16: sqroot(); break;
//             case 13: exit(0);
//             default: std::cout << "WRONG CHOICE: SELECT AGAIN\n"; break;
//         }
//     }
//     return 0;
// }

// int menu() {
//     int choice;
//     std::cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulo\n6. Clear\n";
//     std::cout << "7. Sine\n8. Cosine\n9. Tangent\n10. Cotangent\n11. Sec\n12. Cosec\n";
//     std::cout << "13. Exit\n14. Cube\n15. Square\n16. Square Root\n";
//     std::cout << "Enter an option: ";
//     std::cin >> choice;
//     return choice;
// }

// void add() {
//     double a;
//     std::cout << "Enter a number: ";
//     std::cin >> a;
//     result += a;
// }

// void sub() {
//     double a;
//     std::cout << "Enter a number: ";
//     std::cin >> a;
//     result -= a;
// }

// void mul() {
//     double a;
//     std::cout << "Enter a number: ";
//     std::cin >> a;
//     result *= a;
// }

// void div() {
//     double a;
//     std::cout << "Enter a number: ";
//     std::cin >> a;
//     if (a != 0)
//         result /= a;
//     else
//         std::cout << "Error: Division by zero\n";
// }

// void mod() {
//     int a, b;
//     std::cout << "Enter two numbers: ";
//     std::cin >> a >> b;
//     if (b != 0)
//         result = a % b;
//     else
//         std::cout << "Error: Division by zero\n";
// }

// void clear() {
//     result = 0;
//     isResultInitialized = false;
//     std::cout << "Data Cleared.\n";
// }

// void sine() {
//     int angle;
//     std::cout << "Enter the angle: ";
//     std::cin >> angle;
//     result = sin((PI / MAX) * angle);
// }

// void cosine() {
//     int angle;
//     std::cout << "Enter the angle: ";
//     std::cin >> angle;
//     result = cos((PI / MAX) * angle);
// }

// void sec() {
//     int angle;
//     std::cout << "Enter the angle: ";
//     std::cin >> angle;
//     result = 1 / cos((PI / MAX) * angle);
// }

// void cosec() {
//     int angle;
//     std::cout << "Enter the angle: ";
//     std::cin >> angle;
//     result = 1 / sin((PI / MAX) * angle);
// }

// void tangent() {
//     int angle;
//     std::cout << "Enter the angle: ";
//     std::cin >> angle;
//     result = tan((PI / MAX) * angle);
// }

// void cotangent() {
//     int angle;
//     std::cout << "Enter the angle: ";
//     std::cin >> angle;
//     result = 1 / tan((PI / MAX) * angle);
// }

// void cube() {
//     int n;
//     std::cout << "Enter the number: ";
//     std::cin >> n;
//     result = n * n * n;
// }

// void square() {
//     int n;
//     std::cout << "Enter the number: ";
//     std::cin >> n;
//     result = n * n;
// }

// void sqroot() {
//     double n;
//     std::cout << "Enter the number: ";
//     std::cin >> n;
//     if (n >= 0)
//         result = sqrt(n);
//     else
//         std::cout << "Error: Negative number\n";
// }


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#define PI 3.141
#define MAX 180

double result = 0;
bool isResultInitialized = false;

void add();
void sub();
void mul();
void div();
void clear();
void sine();
void cosine();
void sec();
void cosec();
void tangent();
void cotangent();
void cube();
void square();
void sqroot();
void mod();
int menu();

int main() {
    std::string name;

    std::cout << "Enter the name of candidate: ";
    std::getline(std::cin, name);

    while (true) {
        std::cout << "\nResult: " << result << "\n";

        int choice = menu();
        switch (choice) {
            case 1: add(); break;
            case 2: sub(); break;
            case 3: mul(); break;
            case 4: div(); break;
            case 5: mod(); break;
            case 6: clear(); break;
            case 7: sine(); break;
            case 8: cosine(); break;
            case 9: tangent(); break;
            case 10: cotangent(); break;
            case 11: sec(); break;
            case 12: cosec(); break;
            case 14: cube(); break;
            case 15: square(); break;
            case 16: sqroot(); break;
            case 13: exit(0);
            default: std::cout << "WRONG CHOICE: SELECT AGAIN\n"; break;
        }
    }
    return 0;
}

int menu() {
    int choice;
    std::cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulo\n6. Clear\n";
    std::cout << "7. Sine\n8. Cosine\n9. Tangent\n10. Cotangent\n11. Sec\n12. Cosec\n";
    std::cout << "13. Exit\n14. Cube\n15. Square\n16. Square Root\n";
    std::cout << "Enter an option: ";
    std::cin >> choice;
    return choice;
}

void add() {
    double a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result += a;
}

void sub() {
    double a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result -= a;
}

void mul() {
    double a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result *= a;
}

void div() {
    double a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    if (a != 0)
        result /= a;
    else
        std::cout << "Error: Division by zero\n";
}

void mod() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (b != 0)
        result = a % b;
    else
        std::cout << "Error: Division by zero\n";
}

void clear() {
    result = 0;
    isResultInitialized = false;
    std::cout << "Data Cleared.\n";
}

void sine() {
    int angle;
    std::cout << "Enter the angle: ";
    std::cin >> angle;
    result = sin((PI / MAX) * angle);
}

void cosine() {
    int angle;
    std::cout << "Enter the angle: ";
    std::cin >> angle;
    result = cos((PI / MAX) * angle);
}

void sec() {
    int angle;
    std::cout << "Enter the angle: ";
    std::cin >> angle;
    result = 1 / cos((PI / MAX) * angle);
}

void cosec() {
    int angle;
    std::cout << "Enter the angle: ";
    std::cin >> angle;
    result = 1 / sin((PI / MAX) * angle);
}

void tangent() {
    int angle;
    std::cout << "Enter the angle: ";
    std::cin >> angle;
    result = tan((PI / MAX) * angle);
}

void cotangent() {
    int angle;
    std::cout << "Enter the angle: ";
    std::cin >> angle;
    result = 1 / tan((PI / MAX) * angle);
}

void cube() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    result = n * n * n;
}

void square() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    result = n * n;
}

void sqroot() {
    double n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    if (n >= 0)
        result = sqrt(n);
    else
        std::cout << "Error: Negative number\n";
}
