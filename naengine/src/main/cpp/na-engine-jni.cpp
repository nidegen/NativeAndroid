#include <jni.h>

#include <string>
#include <memory>

#include <android/log.h>

#include "na-engine.h"


// some details: http://stylishtoupee.blogspot.com/2011/07/jni-example-with-class-instantiation-c.html

extern "C" JNIEXPORT jlong JNICALL
Java_com_nide_naengine_NAEngine_createNAEngine(JNIEnv *, jobject, jlong value) {
    // Some init values that can be passed
    jlong tmp = value;
    return reinterpret_cast<jlong>(new NAEngine());
}

extern "C" JNIEXPORT void JNICALL
Java_com_nide_naengine_NAEngine_destroyNAEngine(JNIEnv *, jobject, jlong ptr) {
    NAEngine *engine_ptr = reinterpret_cast<NAEngine*>(ptr);
    if(engine_ptr) {
        delete engine_ptr;
    }
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_nide_naengine_NAEngine_getNameJNI(JNIEnv *env, jobject) {
    std::string hello = "This is NativeRenderer";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jint JNICALL
Java_com_nide_naengine_NAEngine_compute(JNIEnv *env, jobject, jlong ptr, jint value) {
    NAEngine *engine_ptr = reinterpret_cast<NAEngine*>(ptr);
    jint return_value = 0;
    if(engine_ptr) {
        return_value = engine_ptr->compute(value);
    } else  {
        // Shit
    }
    return return_value;
}
