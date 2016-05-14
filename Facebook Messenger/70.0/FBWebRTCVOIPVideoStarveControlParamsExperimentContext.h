/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@interface FBWebRTCVOIPVideoStarveControlParamsExperimentContext : FBExperimentContext {

	int _enable_starve;
	int _video_packet_loss_low;
	int _video_packet_loss_high;
	int _starve_in_window_ms;
	int _starve_out_window_ms;
	int _video_bitrate_margin_low;
	int _video_bitrate_margin_high;
	int _audio_packet_loss_low;
	int _audio_packet_loss_high;
	int _starve_in_audio_window_ms;
	int _starve_out_audio_window_ms;
	int _v;
	int _enable_delta_frame;
	int _rtt_high;
	int _rtt_low;
	int _ui_notify;
	int _rtt_trigger;

}

@property (nonatomic,readonly) int enable_starve;                           //@synthesize enable_starve=_enable_starve - In the implementation block
@property (nonatomic,readonly) int video_packet_loss_low;                   //@synthesize video_packet_loss_low=_video_packet_loss_low - In the implementation block
@property (nonatomic,readonly) int video_packet_loss_high;                  //@synthesize video_packet_loss_high=_video_packet_loss_high - In the implementation block
@property (nonatomic,readonly) int starve_in_window_ms;                     //@synthesize starve_in_window_ms=_starve_in_window_ms - In the implementation block
@property (nonatomic,readonly) int starve_out_window_ms;                    //@synthesize starve_out_window_ms=_starve_out_window_ms - In the implementation block
@property (nonatomic,readonly) int video_bitrate_margin_low;                //@synthesize video_bitrate_margin_low=_video_bitrate_margin_low - In the implementation block
@property (nonatomic,readonly) int video_bitrate_margin_high;               //@synthesize video_bitrate_margin_high=_video_bitrate_margin_high - In the implementation block
@property (nonatomic,readonly) int audio_packet_loss_low;                   //@synthesize audio_packet_loss_low=_audio_packet_loss_low - In the implementation block
@property (nonatomic,readonly) int audio_packet_loss_high;                  //@synthesize audio_packet_loss_high=_audio_packet_loss_high - In the implementation block
@property (nonatomic,readonly) int starve_in_audio_window_ms;               //@synthesize starve_in_audio_window_ms=_starve_in_audio_window_ms - In the implementation block
@property (nonatomic,readonly) int starve_out_audio_window_ms;              //@synthesize starve_out_audio_window_ms=_starve_out_audio_window_ms - In the implementation block
@property (v,nonatomic,readonly) int v;                                     //@synthesize v=_v - In the implementation block
@property (nonatomic,readonly) int enable_delta_frame;                      //@synthesize enable_delta_frame=_enable_delta_frame - In the implementation block
@property (nonatomic,readonly) int rtt_high;                                //@synthesize rtt_high=_rtt_high - In the implementation block
@property (nonatomic,readonly) int rtt_low;                                 //@synthesize rtt_low=_rtt_low - In the implementation block
@property (nonatomic,readonly) int ui_notify;                               //@synthesize ui_notify=_ui_notify - In the implementation block
@property (nonatomic,readonly) int rtt_trigger;                             //@synthesize rtt_trigger=_rtt_trigger - In the implementation block
+(char)allowUserInterfaceIdiom:(int)arg1 ;
+(id)universeName;
+(id)parameterConfigurations;
-(int)v;
-(int)enable_starve;
-(int)video_packet_loss_low;
-(int)video_packet_loss_high;
-(int)starve_in_window_ms;
-(int)starve_out_window_ms;
-(int)video_bitrate_margin_low;
-(int)video_bitrate_margin_high;
-(int)audio_packet_loss_low;
-(int)audio_packet_loss_high;
-(int)starve_in_audio_window_ms;
-(int)starve_out_audio_window_ms;
-(int)enable_delta_frame;
-(int)rtt_high;
-(int)rtt_low;
-(int)ui_notify;
-(int)rtt_trigger;
@end

