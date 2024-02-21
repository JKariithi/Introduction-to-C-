#include <stdlib.h>
double rand_double() {
//  generate random number in [0,1)
double ret = (double) rand ();
return ret / (RAND_MAX  + 1);
}

int sample_geometric_rv ( double p ) {
double q ;
int n = 0 ;
while ( q >= p ) {
q = rand_double ( ) ;
n++;
} 
return n ;
}
// we were only to change the the sample_geometric_tv to 