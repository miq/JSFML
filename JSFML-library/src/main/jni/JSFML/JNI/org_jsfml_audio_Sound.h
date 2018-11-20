/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_audio_Sound */

#ifndef _Included_org_jsfml_audio_Sound
#define _Included_org_jsfml_audio_Sound
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_Sound_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeSetExPtr
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_nativeSetExPtr
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeCopy
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_Sound_nativeCopy
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    play
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_play
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    pause
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_pause
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_stop
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeSetBuffer
 * Signature: (Lorg/jsfml/audio/SoundBuffer;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_nativeSetBuffer
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeSetLoop
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_nativeSetLoop
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeSetPlayingOffset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_audio_Sound_nativeSetPlayingOffset
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeGetPlayingOffset
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_audio_Sound_nativeGetPlayingOffset
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_audio_Sound
 * Method:    nativeGetStatus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jsfml_audio_Sound_nativeGetStatus
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif