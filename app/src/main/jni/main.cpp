
#include <jni.h>
#include "strConv.h"
#include <android/log.h>
#include "logHelper.h"
using namespace std;
extern "C" {
 JNIEXPORT jstring JNICALL Java_test_seznam_cz_ndktest_MainActivity_stringFromJNI( JNIEnv* env,jobject thiz,jstring javaString);
 JNIEXPORT void JNICALL Java_test_seznam_cz_ndktest_MainActivity_test( JNIEnv* env,jobject thiz,jint limit);
}

JNIEXPORT jstring JNICALL Java_test_seznam_cz_ndktest_MainActivity_stringFromJNI( JNIEnv* env, jobject thiz,jstring javaString)
      {
      string param=toCpp(env,javaString);
      LOGI("Param is %s\n", toPtr(param));
      string result="Hello from C++ over JNI! "+param;
      return toJava(env,result);
      }
JNIEXPORT void JNICALL Java_test_seznam_cz_ndktest_MainActivity_test( JNIEnv* env, jobject thiz,jint limit)
      {
      int j=0;
      for(int i=0;i<limit;++i){
         j=i/100;
      }
      return;
      }













