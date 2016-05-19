/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface GCKLaunchOptions : NSObject <NSCopying, NSCoding> {

	char _relaunchIfRunning;
	NSString* _languageCode;

}

@property (nonatomic,copy) NSString * languageCode;               //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) char relaunchIfRunning;              //@synthesize relaunchIfRunning=_relaunchIfRunning - In the implementation block
-(id)initWithLanguageCode:(id)arg1 relaunchIfRunning:(char)arg2 ;
-(char)relaunchIfRunning;
-(id)initWithRelaunchIfRunning:(char)arg1 ;
-(void)setRelaunchIfRunning:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

