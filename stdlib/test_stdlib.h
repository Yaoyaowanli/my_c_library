#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cassert>

void test_atof();
void test_atoi();
void test_atol();
void test_strtod();
void test_rand();
void test_calloc();
void test_malloc();
void test_abort();
void test_atexit();
void test_quick_exit();
void test_getenv();
void test_system();
void* my_bsearch(const void* key,const void* base,size_t num,size_t size,int (*compar)(const void*,const void*));
int compar_int(const void* pmid,const void* key);
void test_my_bsearch();
void my_qsort(void* base,size_t num,size_t size, int (*compar)(const void* , const void*));
void test_my_qsort();
