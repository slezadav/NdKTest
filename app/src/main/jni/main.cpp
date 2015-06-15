
#include <jni.h>
#include "strConv.h"
#include <android/log.h>
#include "logHelper.h"
using namespace std;
#define MAINACTIVITY(n) JNICALL Java_com_github_slezadav_ndktest_MainActivity_##n
extern "C" {
 JNIEXPORT jstring MAINACTIVITY(stringFromJNI)( JNIEnv* env,jobject thiz,jstring javaString);
 JNIEXPORT void MAINACTIVITY(test)( JNIEnv* env,jobject thiz,jint limit);
}

JNIEXPORT jstring MAINACTIVITY(stringFromJNI)( JNIEnv* env, jobject thiz,jstring javaString)
      {
      string param=toCpp(env,javaString);
      LOGI("Param is %s\n", toPtr(param));
      string result="Hello from C++ over JNI! "+param;
      return toJava(env,result);
      }
JNIEXPORT void MAINACTIVITY(test)( JNIEnv* env, jobject thiz,jint limit)
      {
      int j=0;
      for(int i=0;i<limit;++i){
         j=i/100;
      }
      return;
      }













