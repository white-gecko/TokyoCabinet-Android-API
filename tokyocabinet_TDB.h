/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class tokyocabinet_TDB */

#ifndef _Included_tokyocabinet_TDB
#define _Included_tokyocabinet_TDB
#ifdef __cplusplus
extern "C" {
#endif
#undef tokyocabinet_TDB_ESUCCESS
#define tokyocabinet_TDB_ESUCCESS 0L
#undef tokyocabinet_TDB_ETHREAD
#define tokyocabinet_TDB_ETHREAD 1L
#undef tokyocabinet_TDB_EINVALID
#define tokyocabinet_TDB_EINVALID 2L
#undef tokyocabinet_TDB_ENOFILE
#define tokyocabinet_TDB_ENOFILE 3L
#undef tokyocabinet_TDB_ENOPERM
#define tokyocabinet_TDB_ENOPERM 4L
#undef tokyocabinet_TDB_EMETA
#define tokyocabinet_TDB_EMETA 5L
#undef tokyocabinet_TDB_ERHEAD
#define tokyocabinet_TDB_ERHEAD 6L
#undef tokyocabinet_TDB_EOPEN
#define tokyocabinet_TDB_EOPEN 7L
#undef tokyocabinet_TDB_ECLOSE
#define tokyocabinet_TDB_ECLOSE 8L
#undef tokyocabinet_TDB_ETRUNC
#define tokyocabinet_TDB_ETRUNC 9L
#undef tokyocabinet_TDB_ESYNC
#define tokyocabinet_TDB_ESYNC 10L
#undef tokyocabinet_TDB_ESTAT
#define tokyocabinet_TDB_ESTAT 11L
#undef tokyocabinet_TDB_ESEEK
#define tokyocabinet_TDB_ESEEK 12L
#undef tokyocabinet_TDB_EREAD
#define tokyocabinet_TDB_EREAD 13L
#undef tokyocabinet_TDB_EWRITE
#define tokyocabinet_TDB_EWRITE 14L
#undef tokyocabinet_TDB_EMMAP
#define tokyocabinet_TDB_EMMAP 15L
#undef tokyocabinet_TDB_ELOCK
#define tokyocabinet_TDB_ELOCK 16L
#undef tokyocabinet_TDB_EUNLINK
#define tokyocabinet_TDB_EUNLINK 17L
#undef tokyocabinet_TDB_ERENAME
#define tokyocabinet_TDB_ERENAME 18L
#undef tokyocabinet_TDB_EMKDIR
#define tokyocabinet_TDB_EMKDIR 19L
#undef tokyocabinet_TDB_ERMDIR
#define tokyocabinet_TDB_ERMDIR 20L
#undef tokyocabinet_TDB_EKEEP
#define tokyocabinet_TDB_EKEEP 21L
#undef tokyocabinet_TDB_ENOREC
#define tokyocabinet_TDB_ENOREC 22L
#undef tokyocabinet_TDB_EMISC
#define tokyocabinet_TDB_EMISC 9999L
#undef tokyocabinet_TDB_TLARGE
#define tokyocabinet_TDB_TLARGE 1L
#undef tokyocabinet_TDB_TDEFLATE
#define tokyocabinet_TDB_TDEFLATE 2L
#undef tokyocabinet_TDB_TBZIP
#define tokyocabinet_TDB_TBZIP 4L
#undef tokyocabinet_TDB_TTCBS
#define tokyocabinet_TDB_TTCBS 8L
#undef tokyocabinet_TDB_OREADER
#define tokyocabinet_TDB_OREADER 1L
#undef tokyocabinet_TDB_OWRITER
#define tokyocabinet_TDB_OWRITER 2L
#undef tokyocabinet_TDB_OCREAT
#define tokyocabinet_TDB_OCREAT 4L
#undef tokyocabinet_TDB_OTRUNC
#define tokyocabinet_TDB_OTRUNC 8L
#undef tokyocabinet_TDB_ONOLCK
#define tokyocabinet_TDB_ONOLCK 16L
#undef tokyocabinet_TDB_OLCKNB
#define tokyocabinet_TDB_OLCKNB 32L
#undef tokyocabinet_TDB_OTSYNC
#define tokyocabinet_TDB_OTSYNC 64L
#undef tokyocabinet_TDB_ITLEXICAL
#define tokyocabinet_TDB_ITLEXICAL 0L
#undef tokyocabinet_TDB_ITDECIMAL
#define tokyocabinet_TDB_ITDECIMAL 1L
#undef tokyocabinet_TDB_ITTOKEN
#define tokyocabinet_TDB_ITTOKEN 2L
#undef tokyocabinet_TDB_ITQGRAM
#define tokyocabinet_TDB_ITQGRAM 3L
#undef tokyocabinet_TDB_ITOPT
#define tokyocabinet_TDB_ITOPT 9998L
#undef tokyocabinet_TDB_ITVOID
#define tokyocabinet_TDB_ITVOID 9999L
#undef tokyocabinet_TDB_ITKEEP
#define tokyocabinet_TDB_ITKEEP 16777216L
/*
 * Class:     tokyocabinet_TDB
 * Method:    errmsg
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tokyocabinet_TDB_errmsg
  (JNIEnv *, jclass, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tokyocabinet_TDB_init
  (JNIEnv *, jclass);

/*
 * Class:     tokyocabinet_TDB
 * Method:    ecode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tokyocabinet_TDB_ecode
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    tune
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_tune
  (JNIEnv *, jobject, jlong, jint, jint, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    setcache
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_setcache
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    setxmsiz
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_setxmsiz
  (JNIEnv *, jobject, jlong);

/*
 * Class:     tokyocabinet_TDB
 * Method:    setdfunit
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_setdfunit
  (JNIEnv *, jobject, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    open
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_open
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    close
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_close
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    out
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_out
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     tokyocabinet_TDB
 * Method:    vsiz
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_tokyocabinet_TDB_vsiz
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     tokyocabinet_TDB
 * Method:    iterinit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_iterinit
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    iternext
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_tokyocabinet_TDB_iternext
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    fwmkeys
 * Signature: ([BI)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_tokyocabinet_TDB_fwmkeys
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    addint
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_tokyocabinet_TDB_addint
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    adddouble
 * Signature: ([BD)D
 */
JNIEXPORT jdouble JNICALL Java_tokyocabinet_TDB_adddouble
  (JNIEnv *, jobject, jbyteArray, jdouble);

/*
 * Class:     tokyocabinet_TDB
 * Method:    sync
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_sync
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    optimize
 * Signature: (JIII)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_optimize
  (JNIEnv *, jobject, jlong, jint, jint, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    vanish
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_vanish
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    copy
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_copy
  (JNIEnv *, jobject, jstring);

/*
 * Class:     tokyocabinet_TDB
 * Method:    tranbegin
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_tranbegin
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    trancommit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_trancommit
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    tranabort
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_tranabort
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    path
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tokyocabinet_TDB_path
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    rnum
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_tokyocabinet_TDB_rnum
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    fsiz
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_tokyocabinet_TDB_fsiz
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    setindex
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_setindex
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    genuid
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_tokyocabinet_TDB_genuid
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tokyocabinet_TDB_initialize
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    destruct
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tokyocabinet_TDB_destruct
  (JNIEnv *, jobject);

/*
 * Class:     tokyocabinet_TDB
 * Method:    putimpl
 * Signature: ([B[[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_tokyocabinet_TDB_putimpl
  (JNIEnv *, jobject, jbyteArray, jobjectArray, jint);

/*
 * Class:     tokyocabinet_TDB
 * Method:    getimpl
 * Signature: ([B)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_tokyocabinet_TDB_getimpl
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
