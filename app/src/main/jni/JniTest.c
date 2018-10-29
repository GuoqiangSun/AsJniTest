//
// Created by Administrator on 2018/10/29 0029.
//

#include "startai_com_cn_asjnitest_JniTest.h"

/*
 * Class:     startai_com_cn_asjnitest_JniTest
 * Method:    getMsgFromJni
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_startai_com_cn_asjnitest_JniTest_getMsgFromJni
        (JNIEnv *env, jobject jObj) {

    return (*env)->NewStringUTF(env, "123");

}

/*
 * Class:     startai_com_cn_asjnitest_JniTest
 * Method:    calculation
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_startai_com_cn_asjnitest_JniTest_calculation
        (JNIEnv *env, jobject Jobj) {


    return 1 + 1;

};


