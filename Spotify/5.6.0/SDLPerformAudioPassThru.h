/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SDLRPCRequest.h>

@class NSMutableArray, NSString, SDLSamplingRate, NSNumber, SDLBitsPerSample, SDLAudioType;

@interface SDLPerformAudioPassThru : SDLRPCRequest

@property (retain) NSMutableArray * initialPrompt; 
@property (retain) NSString * audioPassThruDisplayText1; 
@property (retain) NSString * audioPassThruDisplayText2; 
@property (retain) SDLSamplingRate * samplingRate; 
@property (retain) NSNumber * maxDuration; 
@property (retain) SDLBitsPerSample * bitsPerSample; 
@property (retain) SDLAudioType * audioType; 
@property (retain) NSNumber * muteAudio; 
-(void)setSamplingRate:(SDLSamplingRate *)arg1 ;
-(SDLSamplingRate *)samplingRate;
-(NSString *)audioPassThruDisplayText1;
-(NSString *)audioPassThruDisplayText2;
-(NSNumber *)muteAudio;
-(void)setInitialPrompt:(NSMutableArray *)arg1 ;
-(NSMutableArray *)initialPrompt;
-(void)setAudioPassThruDisplayText1:(NSString *)arg1 ;
-(void)setAudioPassThruDisplayText2:(NSString *)arg1 ;
-(void)setMuteAudio:(NSNumber *)arg1 ;
-(void)setMaxDuration:(NSNumber *)arg1 ;
-(NSNumber *)maxDuration;
-(void)setBitsPerSample:(SDLBitsPerSample *)arg1 ;
-(SDLBitsPerSample *)bitsPerSample;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAudioType:(SDLAudioType *)arg1 ;
-(SDLAudioType *)audioType;
@end

