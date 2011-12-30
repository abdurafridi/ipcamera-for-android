#ifndef _IPCAMERA_H_
#define _IPCAMERA_H_

#include <vector>
#include <string>
#include <jni.h>
#include <android/log.h>


#define  LOG_TAG    "TEAONLY"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)  

struct MediaCheckInfo {
public:    
    int video_width, video_height;
    int audio_codec;
    int begin_skip;
    std::vector<unsigned char> sps_data;
    std::vector<unsigned char> pps_data;
};

extern MediaCheckInfo mediaInfo;
int CheckMedia(const std::string mp4_file);

int StartStreamingMedia(int infd, int outfd);
void StopStreamingMedia();

#endif
