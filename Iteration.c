#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int ar[] = {4, 3, 2, 1};
    int sz = sizeof(ar)/ sizeof(int);
    for(int i = 0;  i<sz; i++){
        bool swp = false;
        for(int j = 0 ;j<sz-i-1; j++){
            if(ar[j]>ar[j+1]){
                swp = true;
                int tmp =  ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
        }
        if(!swp) break;
    }
    for(int i = 0; i<sz; i++) printf("%d ", ar[i]);
}

// int sm(int n){
//     // static int sum = 0;
//     // if(n/10==0) return sum;
//     // sum += (n%10);
//     // return sm(n/10);
//     if(n==0) return 0;
//     return (n%10)+sm(n/10);
// }

// int main(){
//     int n = 123;
//     printf("%d\n", sm(n));
// }



// int gcd(int x, int y){
//     if(y%x==0) return x;
//     return gcd(y%x, x);
// }

// int main(){
//     int x, y;
//     scanf("%d %d", &x, &y);
//     printf("%d\n", gcd(x,y));
        // int lcm = (x*y)/gcd(x, y);
// }

// int main(){
//     int x, y;
//     scanf("%d %d", &x, &y);
//     while(y%x){
//         int r = y%x;
//         y = x; 
//         x = r;
//     }
//     printf("%d", x);
// }

// int main(){
//     FILE *fp;
//     fp = fopen("Output.txt", "w");
//     // fp = ("Output.txt", "w");
//     int n;
//     scanf("%d", &n);
//     fprintf(fp, "%d\n", n);
//     fclose(fp);
//     fp = fopen("Output.txt", "r");
//     for(int i = 0; i<1; i++){
//         int r;
//         fscanf(fp, "%d", &r);
//         fprintf(fp, "%d", r);
//     }
//     fclose(fp);
// }

// #include <stdio.h>

// int main() {
//     FILE *fp;
//     int n;

//     // Open file in write mode
//     fp = fopen("Output.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     printf("Enter a number: ");
//     scanf("%d", &n);
//     fprintf(fp, "%d\n", n);  // Write user input to file
//     fclose(fp);  // Close the file after writing

//     // Open file again in read mode
//     fp = fopen("Output.txt", "r");
//     if (fp == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     int r;
//     fscanf(fp, "%d", &r);  // Read number from file
//     printf("Number read from file: %d\n", r); // Print the value
//     // fprintf(fp, "%d", r);
//     fclose(fp);  // Close file after reading

//     return 0;
// }

// void convert(char *s){
//     while(*s){
//         switch(*s){
//             case 'A'...'Z': *s+=32; break;
//             case 'a'...'z': *s-=32; break;
//         }
//         s++;
//     }
// }
// int main(){
//     char c[] = "ho_Jo";
//     convert(c);
//     printf("%s\n", c);
// }




// int main(){
//     char *c = (char *) calloc(100, sizeof(char));
//     if(c==NULL) return 1;
//     fgets(c, 100, stdin);
//     c[strcspn(c, "\n")]='\0';
//     int sz = strlen(c);
//     printf("%d\n", sz);
//     printf("%s\n", c);//prints the input
//     free(c);
// }

// int main(){
//     int n = 4;
//     for(int i = 1; i<=n; i++){
//         for(int k = 1; k<=(n-i); k++) printf(" ");
//         for(int j = 1; j<=i; j++) printf("#");
//         printf("\n");
//     }
// }


// int main(){
//     int *p;
//     p = (int *) malloc(sizeof(int));//calling-1
//     p = malloc(sizeof(int));//calling-2
//     *p = 303;
//     printf("%d\n", *p);
// }
// int main(){
//     int i = 0; 
//     do{
//         i++;
//         printf("%d -> ", i);
//     } while(i<=5);
// }


// int main(){
//     char str[100];
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str,"\n")] = '\0';
//     printf("%d\n", strcspn(str,"\n"));
//     puts(str);
// }

// int main(){
//     int  x = 10;
//     int itr =0;
//     while(x--){
//         if(x%5) printf("%d->", x);
//         else printf("%d>>>", x);
//         itr++;
//     } 
// }

// int main(){
//     int n, num;
//     scanf("%d", &n);
//     long long sm = n;
//     for(num = 1; num<n; num++){
//         sm += num;
//         printf("%d + ", num);
//     }
//     printf("%d = %lld", num, sm);
// }

// scanf("%10[abcs^\n]", str);