const char* dgemv_desc = "Basic implementation of matrix-vector multiply.";
/*
 * This routine performs a dgemm operation
 *  y := y + A * x
 * where A, B, and C are n-by-n matrices stored in column-major format.
 * On exit, A and B maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y)
{

for (int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           
         y[i] += A[j + i * n] * x[j];
       }}


}
