        #include<stdio.h>

        int Dig(int n){
            if(n/10==0) return 1;
            return 1 + Dig(n/10);
        }

        int main(){
            int n;
            scanf("%d", &n);
            // Dig(n);
            printf("%d\n", Dig(n));
        }