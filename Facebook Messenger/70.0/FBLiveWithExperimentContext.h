/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@interface FBLiveWithExperimentContext : FBExperimentContext {

	int _video_send_min_bitrate_kbps;
	int _video_send_max_bitrate_kbps;
	int _video_send_start_bitrate_kbps;
	int _framerate_fps;
	int _codec_use_h264;
	int _starting_resolution;

}

@property (nonatomic,readonly) int video_send_min_bitrate_kbps;                //@synthesize video_send_min_bitrate_kbps=_video_send_min_bitrate_kbps - In the implementation block
@property (nonatomic,readonly) int video_send_max_bitrate_kbps;                //@synthesize video_send_max_bitrate_kbps=_video_send_max_bitrate_kbps - In the implementation block
@property (nonatomic,readonly) int video_send_start_bitrate_kbps;              //@synthesize video_send_start_bitrate_kbps=_video_send_start_bitrate_kbps - In the implementation block
@property (nonatomic,readonly) int framerate_fps;                              //@synthesize framerate_fps=_framerate_fps - In the implementation block
@property (nonatomic,readonly) int codec_use_h264;                             //@synthesize codec_use_h264=_codec_use_h264 - In the implementation block
@property (nonatomic,readonly) int starting_resolution;                        //@synthesize starting_resolution=_starting_resolution - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(int)video_send_min_bitrate_kbps;
-(int)video_send_max_bitrate_kbps;
-(int)video_send_start_bitrate_kbps;
-(int)framerate_fps;
-(int)codec_use_h264;
-(int)starting_resolution;
@end

