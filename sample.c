#include <stdio.h>
#include <string.h>


// 1. Hello, World! and Variables
// int main(){
//     int age = 12;
//     float cm = 130.54;

//     printf("Hello World!\n");
//     printf("I'm %d years old and %.2f cm tall\n", age, cm);

//     return 0;
// }




// 2. Simple Calculator
// int main(){
//     float a, b;
//     char operation;

//     printf("Enter $a $operation $b (for ex: a + b): \n");
//     scanf("%f %c %f", &a, &operation, &b);

//     switch (operation)
//     {
//         case '+':
//             printf("%.0f\n", (a + b));
//             break;
//         case '-':
//             printf("%.0f\n", (a - b));
//             break;
//         case '*':
//             printf("%.2f\n", (a * b));
//             break;
//         case '/':
//             if (b == 0) { 
//                 printf("divide by zero error!\n"); 
//             }
//             else{
//                 printf("%.0f\n", (a / b));
//             } 
//             break;
//         default:
//             break;
//     }
//     return 0;
// }




// 3. Even or Odd?
// int main(){
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num % 2 == 0) {
//         printf("Even\n");
//     }
//     else{
//         printf("Odd\n");
//     }
//     return 0;
// }



// 4. Maximum of Three Numbers
// int main(){
//     int a, b, c;

//     printf("Enter 3 numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     int max = (a > b) ? ((a > c) ? a : c) : (b > c ? b : c);
//     printf("Maximum of three numbers is: %d\n", max);
//     return 0;
// }




// 5. Factorial Finder

// // Loop Version
// int factorial(num){
//     int total = 1;
//     for(int i = num; i > 1; i--){
//         total = total * i;
//     }
//     return total;
// }

// // recursion version
// int fact(num, total){
//     if (num > 1)
//     {
//         total = num * total;
//         num--;
//         fact(num, total);
//     }
//     else{
//         return total;
//     }

// }

// int main(){
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int max;
//     if (num == 0 || num == 1){
//         max = 1;
//     }
//     else{
//         max = factorial(num);
//     }
//     printf("Factorial of %d is: %d\n", num, max);
//     printf("Factorial of %d is: %d\n", num, fact(num, 1));

//     return 0;
// }



// 6. Reverse Number
// int main(){
//     // int num;

//     // printf("Enter a number: ");
//     // scanf("%d", &num);
//     return 0;
// }



// 7. Simple Interest Calculator
// int main(){
//     float P, RI, T;
//     printf("Enter Principal, Rate of Interest, years: \n");
//     scanf("%f %f %f", &P, &RI, &T);

//     float SI = (P * RI * T) / 100;
//     printf("Simple Interest: %.2f\n", SI);
//     return 0;
// }



// 8. Leap Year
// int main(){
//     int year;

//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if (year % 100 == 0){
//             printf("Not Leap Year");
//     }
//     else{
//             if (year % 400 == 0){
//                 printf("Leap Year");
//             }
//             else if (year % 4 == 0){
//                 printf("Leap Year");
//             }
//             else{
//                 printf("Not Leap Year");
//             }
//         }

//     return 0;
// }




// 9. Fibonaci Series
// int main(){
//     int num;
//     int a = 1;
//     int b = 1;
//     int c;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("0\n1\n1\n");
//     for (int i = 1; i < num; i++){
//         c = a + b;
//         printf("%d\n", c);
//         a = b;
//         b = c;
//     }
//     return 0;
// }



// 10. Character Analysis
// int main(){
//     char c;
//     printf("Enter A Character: ");
//     scanf("%c", &c);

//     switch (c){
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             printf("Vowel\n");
//             break;
//         case '0':
//         case '1':
//         case '2':
//         case '3':
//         case '4':
//         case '5':
//         case '6':
//         case '7':
//         case '8':
//         case '9':
//             printf("Digit\n");
//             break;
//         case '%':
//         case '!':
//         case '@':
//         case '#':
//         case '$':
//         case ')':
//         case '^':
//         case '&':
//         case '*':
//         case '(':
//         case '+':
//         case '-':
//         case '/':
//         case '<':
//         case '>':
//         case '.':
//         case ',':
//         case '{':
//         case '}':
//         case '[':
//         case ']':
//             printf("Special Character\n");
//             break;;
//         default:
//             printf("Not a Vowel\n");
//             break;
//     }

// }






// Intermediate Problems

// 1. Palindrome
// int main(){
//     char word[10];
//     printf("Enter a Word: ");
//     scanf("%s", &word);
//     printf("%s\n", word);
//     int temp = strlen(word) - 1;
//     int res;
//     for (int i = 0; i < strlen(word); i++){
//         res = word[i] == word[temp - i];
//         if (res == 0){
//             printf("Not a Palindrome!\n");
//             return 0;
//         }
//     }
//     printf("Palindrome!!!\n");
//     return 0;
// }


// 2. Prime Number in range
// int main(){
//     int a;
//     int b;
//     int isPrime;
//     printf("Enter the range of start and end: ");
//     scanf("%d %d", &a, &b);

//     for (int i=a; i<=b; i++){
//         isPrime = 1;
//         for (int j=2; j<i; j++){
//             if (i % j == 0)
//             {
//                 isPrime = 0;
//             }
//         }
//         if (isPrime == 1)
//         {
//             printf("%d\n", i);
//         } 
//     }
//     return 0;
// }


// 3. Matrice Multiplication
int main(){
    int nums[] = {5, 6, 7};
    printf("%d", nums[0]);

    return 0;
}

