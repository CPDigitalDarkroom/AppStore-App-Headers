/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Spotify/GCKTimestamped.h>

@class NSString;

@interface GCKGuestModeAppIDCacheEntry : NSObject <NSCoding, GCKTimestamped> {

	char _published;
	char _pending;
	NSString* _appID;
	double _timeStamp;

}

@property (nonatomic,copy) NSString * appID;                //@synthesize appID=_appID - In the implementation block
@property (assign,nonatomic) char published;                //@synthesize published=_published - In the implementation block
@property (assign,nonatomic) double timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (assign,nonatomic) char pending;                  //@synthesize pending=_pending - In the implementation block
-(id)initWithAppId:(id)arg1 published:(char)arg2 pending:(char)arg3 ;
-(void)setPublished:(char)arg1 ;
-(char)published;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
-(void)setPending:(char)arg1 ;
-(void)setAppID:(NSString *)arg1 ;
-(char)pending;
-(NSString *)appID;
@end

