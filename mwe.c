#include <stdio.h>
#include "crt/host_runtime.h"
#include "cuda.h"

CUresult cuMemAlloc(CUdeviceptr *dptr, size_t bytesize) {
    printf("\n");
}

/*dec
extern void CUDARTAPI __cudaUnregisterFatBinary(
  void **fatCubinHandle
);
*/
void __cudaUnregisterFatBinary(void **fatCubinHandle) {
    printf("\n");
}


void __attribute__((constructor)) libinit(void) {
}