/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTLogMessage.h>

@class NSString, NSArray;

@interface SPTLogMessagePartyTrackPersonalization1 : SPTLogMessage {

	NSString* _trackUriValue;
	NSString* _contextUriValue;
	NSArray* _personalizedForValue;

}

@property (nonatomic,retain) NSString * trackUriValue;                    //@synthesize trackUriValue=_trackUriValue - In the implementation block
@property (nonatomic,retain) NSString * contextUriValue;                  //@synthesize contextUriValue=_contextUriValue - In the implementation block
@property (nonatomic,retain) NSArray * personalizedForValue;              //@synthesize personalizedForValue=_personalizedForValue - In the implementation block
+(id)messageWithTrackUri:(id)arg1 contextUri:(id)arg2 personalizedFor:(id)arg3 ;
-(void)setTrackUriValue:(NSString *)arg1 ;
-(void)setContextUriValue:(NSString *)arg1 ;
-(void)setPersonalizedForValue:(NSArray *)arg1 ;
-(NSString *)trackUriValue;
-(NSString *)contextUriValue;
-(NSArray *)personalizedForValue;
-(id)serialize;
@end

