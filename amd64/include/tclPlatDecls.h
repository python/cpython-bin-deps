/*
 * tclPlatDecls.h --
 *
 *	Declarations of platform specific Tcl APIs.
 *
 * Copyright (c) 1998-1999 by Scriptics Corporation.
 * All rights reserved.
 */

#ifndef _TCLPLATDECLS
#define _TCLPLATDECLS

#undef TCL_STORAGE_CLASS
#ifdef BUILD_tcl
#   define TCL_STORAGE_CLASS DLLEXPORT
#else
#   ifdef USE_TCL_STUBS
#      define TCL_STORAGE_CLASS
#   else
#      define TCL_STORAGE_CLASS DLLIMPORT
#   endif
#endif

/*
 * WARNING: This file is automatically generated by the tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the generic/tcl.decls script.
 */

/*
 * TCHAR is needed here for win32, so if it is not defined yet do it here.
 * This way, we don't need to include <tchar.h> just for one define.
 */
#if (defined(_WIN32) || defined(__CYGWIN__)) && !defined(_TCHAR_DEFINED)
#   if defined(_UNICODE)
	typedef wchar_t TCHAR;
#   else
	typedef char TCHAR;
#   endif
#   define _TCHAR_DEFINED
#endif

/* !BEGIN!: Do not edit below this line. */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Exported function declarations:
 */

#if defined(_WIN32) || defined(__CYGWIN__) /* WIN */
/* 0 */
EXTERN TCHAR *		Tcl_WinUtfToTChar(const char *str, int len,
				Tcl_DString *dsPtr);
/* 1 */
EXTERN char *		Tcl_WinTCharToUtf(const TCHAR *str, int len,
				Tcl_DString *dsPtr);
/* Slot 2 is reserved */
/* 3 */
EXTERN void		TclUnusedStubEntry(void);
#endif /* WIN */
#ifdef MAC_OSX_TCL /* MACOSX */
/* 0 */
EXTERN int		Tcl_MacOSXOpenBundleResources(Tcl_Interp *interp,
				const char *bundleName, int hasResourceFile,
				int maxPathLen, char *libraryPath);
/* 1 */
EXTERN int		Tcl_MacOSXOpenVersionedBundleResources(
				Tcl_Interp *interp, const char *bundleName,
				const char *bundleVersion,
				int hasResourceFile, int maxPathLen,
				char *libraryPath);
/* 2 */
EXTERN void		TclUnusedStubEntry(void);
#endif /* MACOSX */

typedef struct TclPlatStubs {
    int magic;
    void *hooks;

#if defined(_WIN32) || defined(__CYGWIN__) /* WIN */
    TCHAR * (*tcl_WinUtfToTChar) (const char *str, int len, Tcl_DString *dsPtr); /* 0 */
    char * (*tcl_WinTCharToUtf) (const TCHAR *str, int len, Tcl_DString *dsPtr); /* 1 */
    void (*reserved2)(void);
    void (*tclUnusedStubEntry) (void); /* 3 */
#endif /* WIN */
#ifdef MAC_OSX_TCL /* MACOSX */
    int (*tcl_MacOSXOpenBundleResources) (Tcl_Interp *interp, const char *bundleName, int hasResourceFile, int maxPathLen, char *libraryPath); /* 0 */
    int (*tcl_MacOSXOpenVersionedBundleResources) (Tcl_Interp *interp, const char *bundleName, const char *bundleVersion, int hasResourceFile, int maxPathLen, char *libraryPath); /* 1 */
    void (*tclUnusedStubEntry) (void); /* 2 */
#endif /* MACOSX */
} TclPlatStubs;

extern const TclPlatStubs *tclPlatStubsPtr;

#ifdef __cplusplus
}
#endif

#if defined(USE_TCL_STUBS)

/*
 * Inline function declarations:
 */

#if defined(_WIN32) || defined(__CYGWIN__) /* WIN */
#define Tcl_WinUtfToTChar \
	(tclPlatStubsPtr->tcl_WinUtfToTChar) /* 0 */
#define Tcl_WinTCharToUtf \
	(tclPlatStubsPtr->tcl_WinTCharToUtf) /* 1 */
/* Slot 2 is reserved */
#define TclUnusedStubEntry \
	(tclPlatStubsPtr->tclUnusedStubEntry) /* 3 */
#endif /* WIN */
#ifdef MAC_OSX_TCL /* MACOSX */
#define Tcl_MacOSXOpenBundleResources \
	(tclPlatStubsPtr->tcl_MacOSXOpenBundleResources) /* 0 */
#define Tcl_MacOSXOpenVersionedBundleResources \
	(tclPlatStubsPtr->tcl_MacOSXOpenVersionedBundleResources) /* 1 */
#define TclUnusedStubEntry \
	(tclPlatStubsPtr->tclUnusedStubEntry) /* 2 */
#endif /* MACOSX */

#endif /* defined(USE_TCL_STUBS) */

/* !END!: Do not edit above this line. */

#undef TclUnusedStubEntry
#ifdef MAC_OSX_TCL /* MACOSX */
#undef Tcl_MacOSXOpenBundleResources
#define Tcl_MacOSXOpenBundleResources(a,b,c,d,e) Tcl_MacOSXOpenVersionedBundleResources(a,b,NULL,c,d,e)
#endif

#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLIMPORT

#endif /* _TCLPLATDECLS */


