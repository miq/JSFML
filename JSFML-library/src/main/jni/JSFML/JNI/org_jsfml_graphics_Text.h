/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_Text */

#ifndef _Included_org_jsfml_graphics_Text
#define _Included_org_jsfml_graphics_Text
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Text_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeSetExPtr
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeSetExPtr
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeSetString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeSetString
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeSetFont
 * Signature: (Lorg/jsfml/graphics/Font;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeSetFont
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeSetCharacterSize
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeSetCharacterSize
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeSetStyle
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeSetStyle
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeSetColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeSetColor
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeFindCharacterPos
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Text_nativeFindCharacterPos
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeGetLocalBounds
 * Signature: (Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeGetLocalBounds
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_Text
 * Method:    nativeGetGlobalBounds
 * Signature: (Ljava/nio/Buffer;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Text_nativeGetGlobalBounds
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif