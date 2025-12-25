#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int grp[n];
    //to print minmm taxi needed
    //hello taxi-at most 4 passengers- taxi can take diffn grp.
    int count1 = 0, count2 = 0, count3 = 0;
    int car = 0;

    for(int i = 0; i<n; i++){
        cin>>grp[i];

        if(grp[i] ==  4) car++;

        else if(grp[i] == 3){
            // car++;
            count3++;
        }
        else if(grp[i] == 2){
            count2++;
        }
        else count1++;
    } 
    if(count3>=(count2+count1)) car+=(count2+count1);//end of count2 and count1 work
    // else if()

    //3,1....2,1 permutation
    // if(count3>count1) car number remain same..what about count3>count1..what about count3 can take count2 all
    //count3>=2||1 car count remain same
    //else see count2 if it's equal to or greater than count1 then car+=count2
    //then count1 -= count2;
    //if count1>0 car+= count1
    
    
}