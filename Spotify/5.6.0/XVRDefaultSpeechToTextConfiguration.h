/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/XVRSpeechToTextConfiguration.h>

@class NSString, NSDictionary, NSArray;

@interface XVRDefaultSpeechToTextConfiguration : NSObject <XVRSpeechToTextConfiguration> {

	NSString* authToken;
	NSString* audioRouteName;
	NSString* audioRoute;
	NSString* asr;
	int sampleRate;
	NSString* compression;
	NSDictionary* userData;
	NSArray* phrases;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int sampleRate; 
@property (nonatomic,copy) NSString * speechCloudUrl; 
@property (nonatomic,copy) NSString * audioRoute; 
@property (nonatomic,copy) NSString * audioRouteName; 
@property (nonatomic,copy) NSString * asr; 
@property (nonatomic,copy) NSString * authToken; 
@property (nonatomic,retain) NSDictionary * userData; 
@property (nonatomic,copy) NSString * compression; 
@property (nonatomic,retain) NSArray * phrases; 
-(NSString *)audioRouteName;
-(void)setAudioRouteName:(NSString *)arg1 ;
-(void)setAudioRoute:(NSString *)arg1 ;
-(NSString *)audioRoute;
-(id)initWithSampleRate:(int)arg1 compressionScheme:(id)arg2 asr:(id)arg3 audioRoute:(id)arg4 audioRouteName:(id)arg5 userData:(id)arg6 phrases:(id)arg7 ;
-(void)setAsr:(NSString *)arg1 ;
-(void)setCompression:(NSString *)arg1 ;
-(NSString *)asr;
-(NSString *)compression;
-(id)cleanPhrases:(id)arg1 ;
-(id)initWithSampleRate:(int)arg1 audioRoute:(id)arg2 audioRouteName:(id)arg3 userData:(id)arg4 phrases:(id)arg5 ;
-(void)setSampleRate:(int)arg1 ;
-(int)sampleRate;
-(NSDictionary *)userData;
-(void)setUserData:(NSDictionary *)arg1 ;
-(id)asDictionary;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSArray *)phrases;
-(void)setPhrases:(NSArray *)arg1 ;
@end

