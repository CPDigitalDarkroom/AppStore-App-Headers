/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, AVPlayerItemErrorLog, AVAudioMix;


@protocol FNFAVPlayerItem <NSObject>
@property (nonatomic,readonly) int status; 
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,copy,readonly) AVPlayerItemErrorLog * errorLog; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@required
-(void)requestTimeLoadedUpdate;
-(AVAudioMix *)audioMix;
-(AVPlayerItemErrorLog *)errorLog;
-(void)addOutput:(id)arg1;
-(NSArray *)loadedTimeRanges;
-(SCD_Struct_FB51*)currentTime;
-(char)isPlaybackLikelyToKeepUp;
-(char)isPlaybackBufferFull;
-(SCD_Struct_FB51*)duration;
-(id)asset;
-(int)status;
-(id)accessLog;
-(void)setAudioMix:(id)arg1;

@end

