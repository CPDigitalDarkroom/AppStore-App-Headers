/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFSTwitterAPICommand.h>

@class NSString;

@interface TFSTwitterAPIAmplifyMarketplaceVideosCommand : TFSTwitterAPICommand {

	NSString* _mediaID;

}

@property (nonatomic,retain) NSString * mediaID;              //@synthesize mediaID=_mediaID - In the implementation block
-(id)initWithService:(id)arg1 accountID:(id)arg2 mediaID:(id)arg3 source:(unsigned)arg4 completionBlock:(/*^block*/id)arg5 ;
-(NSString *)mediaID;
-(id)requestWithPolling:(char)arg1 ;
-(void)setMediaID:(NSString *)arg1 ;
@end

