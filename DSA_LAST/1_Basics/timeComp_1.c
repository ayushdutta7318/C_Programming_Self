#include <stdio.h>


void main(void){

}

/*
time complexity: variation of time taken by algorithm as the size of input grows
1. o(1): const time variation, no matter how large i/p, time variation remain const
2. Mathematically: O(n) = o(n^2) = o(n^3), but as per industrial definition, o(n) != o(n^2) o(n^3).

3. A fn is said to be big o of gn iff exist constant C & a const n0, such that;
0<=fn<=C(gn) for all n>n0.

4. Big omega: 0<=C(gn)<=fn

5.Big theta: 0<=fn<=C1(gn) and &0<=C2(gn)<=fn
*/