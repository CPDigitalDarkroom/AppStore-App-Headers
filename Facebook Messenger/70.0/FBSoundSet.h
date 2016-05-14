/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSoundProtocol.h>

@class NSArray, NSString;

@interface FBSoundSet : NSObject <FBSoundProtocol> {

	NSArray* _sounds;
	unsigned _lastSoundIndex;
	char _loop;
	char _isPlaying;
	float _volume;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isPlaying;                      //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic) char loop;                             //@synthesize loop=_loop - In the implementation block
@property (assign,nonatomic) float volume;                          //@synthesize volume=_volume - In the implementation block
-(void)playWithVelocity:(CGPoint)arg1 ;
-(void)setPositionX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(id)initWithSoundNames:(id)arg1 loop:(char)arg2 ;
-(void)play;
-(char)isPlaying;
-(void)setVolume:(float)arg1 ;
-(void)stop;
-(void)setPosition:(CGPoint)arg1 ;
-(void)pause;
-(void)setRelativeVolume:(float)arg1 ;
-(char)loop;
-(void)setLoop:(char)arg1 ;
-(float)volume;
@end

