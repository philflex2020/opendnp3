//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2016 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef OPENDNP3JAVA_JNIINDEXMODE_H
#define OPENDNP3JAVA_JNIINDEXMODE_H

#include <jni.h>

namespace jni
{
    struct JCache;

    namespace cache
    {
        class IndexMode
        {
            friend struct JCache;

            bool init(JNIEnv* env);
            void cleanup(JNIEnv* env);

            public:

            // methods
            jobject values(JNIEnv* env);
            jobject valueOf(JNIEnv* env, jstring arg0);
            jint toType(JNIEnv* env, jobject instance);
            jobject fromType(JNIEnv* env, jint arg0);

            private:

            jclass clazz = nullptr;

            // method ids
            jmethodID valuesMethod = nullptr;
            jmethodID valueOfMethod = nullptr;
            jmethodID toTypeMethod = nullptr;
            jmethodID fromTypeMethod = nullptr;
        };
    }
}

#endif