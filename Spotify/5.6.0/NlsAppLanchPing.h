/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface NlsAppLanchPing : NSObject <NSCoding> {

	char _isCrashed;
	double _duration;
	double _createdTimestamp;

}

@property (assign) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign) char isCrashed;                       //@synthesize isCrashed=_isCrashed - In the implementation block
@property (assign) double createdTimestamp;              //@synthesize createdTimestamp=_createdTimestamp - In the implementation block
-(char)isCrashed;
-(double)createdTimestamp;
-(void)setIsCrashed:(char)arg1 ;
-(void)setCreatedTimestamp:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
@end

