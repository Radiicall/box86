/*****************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.2.0.09)
 *****************************************************************/
#ifndef __wrappedlibcTYPES_H_
#define __wrappedlibcTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFpp_t)(void*, void*);
typedef int32_t (*iFpV_t)(void*, void*);
typedef int32_t (*iFSp_t)(void*, void*);
typedef void (*vFpup_t)(void*, uint32_t, void*);
typedef int32_t (*iFipL_t)(int32_t, void*, uintptr_t);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef void (*vFpppp_t)(void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(__vwprintf_chk, iFpp_t) \
	GO(execl, iFpV_t) \
	GO(execle, iFpV_t) \
	GO(execlp, iFpV_t) \
	GO(_IO_file_stat, iFSp_t) \
	GO(_ITM_addUserCommitAction, vFpup_t) \
	GO(modify_ldt, iFipL_t) \
	GO(__vfwprintf_chk, iFppp_t) \
	GO(__libc_init, vFpppp_t)

#endif // __wrappedlibcTYPES_H_
