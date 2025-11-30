#include <stdio.h>
struct outer{
    int out1;
    float out2;
    struct inner{
        int in1;
        float in2;
    }invar;
};
int main(){
    struct outer outvar;
    outvar.out1=2;
    outvar.out2=10.57;
    outvar.invar.in1=2*outvar.out1;
    outvar.invar.in2=outvar.out2+3.65;
    printf(" out1 = %d, out2=%6.2f, in1=%d, in2=%6.2f",outvar.out1,outvar.out2,outvar.invar.in1,outvar.invar.in2);
    return 0;
}