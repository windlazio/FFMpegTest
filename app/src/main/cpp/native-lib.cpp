#include <jni.h>
#include <string>

extern "C"
{
#include "libavcodec/avcodec.h"
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_windlazio_ffmpegtest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_windlazio_ffmpegtest_MainActivity_avcodecConfigFromJni(JNIEnv *env, jobject instance) {

    // TODO
    char info[10000] = { 0 };
    sprintf(info,"%s\n",avcodec_configuration());

    return env->NewStringUTF(info);
}