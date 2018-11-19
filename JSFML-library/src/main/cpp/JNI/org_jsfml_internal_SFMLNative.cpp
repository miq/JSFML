#include <JSFML/JNI/org_jsfml_internal_SFMLNative.h>

#include <JSFML/Intercom/JVM.hpp>

#include <JSFML/Intercom/InputStream.hpp>
#include <JSFML/Intercom/NativeObject.hpp>
#include <JSFML/Intercom/NativeRef.hpp>

#include <JSFML/Intercom/SoundRecorder.hpp>
#include <JSFML/Intercom/SoundStream.hpp>

/*
 * Class:     org_jsfml_internal_SFMLNative
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_internal_SFMLNative_nativeInit (JNIEnv *env, jclass cls) {
    JVM::Init(env);
    
    JSFML::InputStream::Init(env);
    JSFML::NativeObject::Init(env);
    JSFML::NativeRef::Init(env);

    JSFML::SoundRecorder::Init(env);
    JSFML::SoundStream::Init(env);
}
