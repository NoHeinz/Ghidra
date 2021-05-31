#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;

bool test(int a, int b, int achance, bchance){
    int i=0;
    bool aa[a];
    bool bb[b];

    for i=0 to (a-1) {
        if rand() % 100 < achance then
            aa[i] = true;
        else
            aa[i] = false;
    }
    for i=0 to (b-1) {
        if rand() % 100 < bchance then
            bb[i] = true;
        else
            bb[i] = false;
    }

}

int main(){


}