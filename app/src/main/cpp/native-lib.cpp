#include <jni.h>
#include <string>
#include <android/log.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "native-lib", __VA_ARGS__))




extern "C" JNIEXPORT void JNICALL
Java_com_sample_checkcwmp_MainActivity_printHelloWorld(
        JNIEnv *env,
        jobject /* this */) {
    printf("Hello World Android JNI!\n");
}

extern "C"
JNIEXPORT void JNICALL
Java_com_sample_samplecjni_MainActivity_00024Companion_init(JNIEnv *env, jobject thiz) {
    LOGI("-------------- LOG FOR CJNI ANDROID SAMPLE NATIVE ----------------------");
}

extern "C" {
JNIEXPORT void JNICALL
Java_com_sample_samplecjni_MainActivity_init(JNIEnv *env, jobject thiz) {
    LOGI("-------------- LOG FOR CJNI ANDROID SAMPLE NATIVE ----------------------");
}
}