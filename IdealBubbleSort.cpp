// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i = 0; i<n; i++) cin >> ar[i];

//     // sort(ar, ar+n);
    // for(int i = 0; i<n-1; i++){
    //     for(int j =0; j<n-1-i; j++){
    //         if(ar[j]>ar[j+1]) swap(ar[j], ar[j+1]);
    //     }
    // }

//     for(int i = 0; i<n; i++) cout << ar[i] << " ";
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<stdbool.h>

// int main(){
//     int ar[] = {4, 3, 2, 1};
//     int sz = sizeof(ar)/ sizeof(int);
//     for(int i = 0;  i<sz; i++){
//         bool swp = false;
//         for(int j = 0 ;j<sz-i-1; j++){
//             if(ar[j]>ar[j+1]){
//                 swp = true;
//                 int tmp =  ar[j];
//                 ar[j] = ar[j+1];
//                 ar[j+1] = tmp;
//             }
//         }
//         if(!swp) break;
//     }
//     for(int i = 0; i<sz; i++) printf("%d ", ar[i]);
// }