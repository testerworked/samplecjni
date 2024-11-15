# samplecjni
a simple Android application for integration with "c" or "c++", jni, output logs from jni


![jni_0](https://github.com/user-attachments/assets/827d5a55-3cda-4a52-b3a7-7e71a631136c)

![jni_1](https://github.com/user-attachments/assets/836258bd-0148-4b0e-9dd5-6b4c8425800f)
![jni_2](https://github.com/user-attachments/assets/7f417127-f10e-45b6-9ca6-ae995355003e)

<br>Gradle config
<br>

    
    defaultConfig {
    
        externalNativeBuild {
            cmake {
                arguments "-DANDROID_STL=c++_shared"
            }
        }
        ndk {
            abiFilters 'x86', 'x86_64', 'armeabi-v7a', 'arm64-v8a'
        }
    }

    externalNativeBuild {
        cmake {
            path file('src/main/cpp/CMakeLists.txt')
            version "3.22.1"
        }
    }
    
