#include <iostream>
using namespace std;
// // int main() {
// //     // int var = 5;

// //     // // store address of var
// //     // int* point_var = &var;

// //     // // print value of var
// //     // cout << "var = " << var << endl;

// //     // // print address of var
// //     // cout << "Address of var (&var) = " << &var << endl
// //     //      << endl;

// //     // // print pointer point_var
// //     // cout << "point_var = " << point_var << endl;
// //     // cout << "point_var = " << *point_var << endl;

// //     // // print the content of the address point_var points to
// //     // cout << "Content of the address pointed to by point_var (*point_var) = " << *point_var << endl;
// //     int arr[3];
    
// //     for(int i = 0; i<3; i++) cin>>*(arr+i);
// //     for(int i = 0; i<3; i++) cout<<*(arr+i);
// //     return 0;
// // }
// #include <iostream>

// using namespace std;

// int main() {

//     string city = "Paris";

//     // create a reference to the variable
//     string& ref_city = city;
    
//     // display the variable
//     // cout << "Variable Value: " << city << endl;
//     // cout << "Reference Value: " << ref_city[1] << endl;

//     // create a variable
// string city = "Paris";

// // // incorrect code [reference not initialized]
// // string& ref_city;
// // ref_city = city;

// // correct code-1
// string& ref_city = city;

// // correct code-2
// string ref_city;
// ref_city = city;
//     return 0;
// }

// function that takes value as parameter

void func1(int num_val) {
    // code
    num_val = 7;
    cout<<"num: "<<num_val<<endl; 
}

// function that takes reference as parameter
// notice the & before the parameter
void func2(int *num_ref) {
    // code
    *num_ref = 9;
    cout<<num_ref<<endl;
}

int main() {
    int num = 5;

    // pass by value
    func1(num);
    // cout<<"1: "<<num<<endl;
    // pass by reference
    func2(&num);
    // cout<<num<<endl;

    return 0;
}