/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TFNCardRuntime : NSObject {

	char _platformIdentifierChangedSinceLastLaunch;
	NSString* _platformIdentifier;

}

@property (nonatomic,readonly) NSString * platformIdentifier;                              //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,readonly) char platformIdentifierChangedSinceLastLaunch;              //@synthesize platformIdentifierChangedSinceLastLaunch=_platformIdentifierChangedSinceLastLaunch - In the implementation block
+(id)sharedCardRuntime;
-(NSString *)platformIdentifier;
-(char)platformIdentifierChangedSinceLastLaunch;
-(id)init;
@end

