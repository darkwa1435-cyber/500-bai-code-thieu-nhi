#include<iostream>
using namespace std;
void print(int a[], int lo, int hi){
    for(int i = lo; i <= hi; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void findpair(int a[], int sum, int lo, int hi){
    for(int i = lo; i < hi; i++){
        for(int j = i + 1; j <= hi; j++){
            if (a[i] + a[j] == sum) cout << "{" << a[i] << "," << a[j] << "}";
            else sum = -1;
        }
    }
    if (sum = -1) cout << "Pair Not found";
}

int main(){
    int a[8] = {2,6,8,9,7,5,1,4};
    print(a,0,7);
    findpair(a,84,0,7);
}