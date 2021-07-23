#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){
    int arr[4] = {a,b,c,d};
    int *min = max_element(begin(arr),end(arr));
    return *min;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

