#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim, plim,flim;
    getrlimit(RLIMIT_STACK, &lim);
    getrlimit(RLIMIT_NPROC, &plim);
    getrlimit(RLIMIT_NOFILE,&flim);
    printf("stack size: %ld\n", lim.rlim_cur);
    printf("process limit: %ld\n",plim.rlim_cur);
    printf("max file descriptors: %ld\n",flim.rlim_cur);
    return 0;
}
