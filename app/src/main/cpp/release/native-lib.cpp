#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_sunggil_cmaketest_Name_a(
        JNIEnv *env,
        jobject /* this */) {
    std::string testStr = "TEST_STR_RELEASE";
    return env->NewStringUTF(testStr.c_str());
}