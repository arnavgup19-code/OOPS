#include <iostream>
using namespace std;

class matrix{
public:
    int a[2][2];

    friend matrix operator*(matrix,matrix);
};

matrix operator*(matrix x,matrix y){
    matrix r;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            r.a[i][j]=0;
            for(int k=0;k<2;k++){
                r.a[i][j]+=x.a[i][k]*y.a[k][j];
            }
        }
    }
    return r;
}

int main(){
    matrix m1,m2,m3;

    m1.a[0][0]=1; m1.a[0][1]=2;
    m1.a[1][0]=3; m1.a[1][1]=4;

    m2.a[0][0]=5; m2.a[0][1]=6;
    m2.a[1][0]=7; m2.a[1][1]=8;

    m3 = m1*m2;

    cout<<m3.a[0][0];
}