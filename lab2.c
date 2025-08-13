#include<stdio.h>
#include<omp.h>
int main(){
    int num_iterations;
    printf("enter the number of iterations:");
    scanf("%d",&num_iterations);


{
    for(int i=0;i<num_iterations;i++){
        printf("Threads %d: Iterarion %d\n",omp_get_thread_num(),i);
    }
}
return 0;
}