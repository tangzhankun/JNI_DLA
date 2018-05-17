#include "com_intel_analytics_bigdl_nn_DLAEngine.h"
#include <stdio.h>
using namespace std;

JNIEXPORT jlongArray JNICALL Java_com_intel_analytics_bigdl_nn_DLAEngine_dlaInference
  (JNIEnv *env, jobject obj, jstring str) {
  long value = 123;
  jlong* buffer = &value;
  jlongArray ret = env->NewLongArray(1);
  env->SetLongArrayRegion(ret, 0, 1, buffer);
  return ret;
}

