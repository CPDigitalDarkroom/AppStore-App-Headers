/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SPTTouchPreviewResolverEntityService : NSObject <NSCopying> {

	NSString* _serviceName;
	NSArray* _pathComponents;

}

@property (nonatomic,readonly) NSString * serviceName;                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSArray * pathComponents;              //@synthesize pathComponents=_pathComponents - In the implementation block
+(id)defaultEntityResolverService;
-(id)initWithServiceName:(id)arg1 pathComponents:(id)arg2 ;
-(NSString *)serviceName;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSArray *)pathComponents;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

