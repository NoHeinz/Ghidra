#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;

bool test(int a, int b, int achance, int bchance){

    bool aa[a];
    bool bb[b];

    for ( int i = 0; i < a; i = i + 1 ){
        if (rand() % 100 < achance)
            aa[i] = true;
        else
            aa[i] = false;
    }
    for ( int i = 0; i < b; i = i + 1 ){
        if (rand() % 100 < bchance)
            bb[i] = true;
        else
            bb[i] = false;
    }
return true;
}

int main(){
    int counts[6];
    for ( int i = 0; i < 6 ; i = i + 1 )
        counts[i] = 0;
    int i, j;

    for ( int i = 0; i < 100 ; i = i + 1 ){
        if test(20,5,50,50)
            count(0)++;
        if test(20,5,50,50)
            count(1)++;
        if test(20,5,50,50)
            count(2)++;
        if test(5,20,50,50)
            count(3)++;
        if test(5,20,50,50)
            count(4)++;
        if test(5,20,50,50)
            count(5)++;
    }

for ( int i = 0; i < 6 ; i = i + 1 )
        cout<< 'test ' << i << ': ' << count(i) << "%" << endl;

}