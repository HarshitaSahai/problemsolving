int Solution::isPower(int A) {
if (A == 1) {
return 1;
}
for (int i = 2; i<A; i++) {
int exp_based_i = log(A)/log(i);
auto reconstruted = pow((double) i, (double) exp_based_i);
if ( reconstruted == A) {
return 1;
}
}
return 0;
}
