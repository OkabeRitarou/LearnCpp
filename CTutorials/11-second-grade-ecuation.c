#include <stdio.h>
#include <math.h>

struct Ec2doGdo {
    float d, x1, x2, a, b, c;
    /*
     * d = b^2 - 4ac
     * x = (-b +/- srt( d ) ) / 2 * a
     *
     * */

    int has_solution;
};

int main() {

    struct Ec2doGdo ec;
    printf("primer number: ");
    scanf("%f", &ec.a);
    printf("second number: ");
    scanf("%f", &ec.b);
    printf("thir number: ");
    scanf("%f", &ec.c);

    ec.d = ec.b * ec.b - 4.0 * ec.a * ec.c;

    if ( ec.d < 0 ){
        ec.has_solution = 0;
    }  else{
        ec.has_solution = 1;
        ec.x1 = ( -ec.b + sqrt(ec.d) ) / ( 2.0 * ec.a );
        ec.x2 = ( -ec.b - sqrt(ec.d) ) / ( 2.0 * ec.a );
    }

    if (ec.has_solution) {
        printf("x1: %f, x2: %f\n", ec.x1, ec.x2);
    } else {
        printf("No hav solution\n");
    }
    return 0;
}
