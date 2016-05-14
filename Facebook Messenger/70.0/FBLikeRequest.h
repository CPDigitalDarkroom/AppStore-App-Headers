/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNetworkerRequest.h>

@class NSString;

@interface FBLikeRequest : FBNetworkerRequest {

	char _unlike;
	NSString* _FBID;
	NSString* _tracking;
	unsigned _contentCreationOrigin;

}

@property (nonatomic,copy) NSString * FBID;                               //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy) NSString * tracking;                           //@synthesize tracking=_tracking - In the implementation block
@property (assign,getter=isUnlike,nonatomic) char unlike;                 //@synthesize unlike=_unlike - In the implementation block
@property (assign,nonatomic) unsigned contentCreationOrigin;              //@synthesize contentCreationOrigin=_contentCreationOrigin - In the implementation block
-(NSString *)FBID;
-(id)networkRequest;
-(id)initWithFBID:(id)arg1 trackingCodes:(id)arg2 contentCreationOrigin:(unsigned)arg3 callbackPerformer:(id)arg4 ;
-(char)isUnlike;
-(id)initWithFBID:(id)arg1 trackingCodes:(id)arg2 callbackPerformer:(id)arg3 ;
-(void)setFBID:(NSString *)arg1 ;
-(void)setUnlike:(char)arg1 ;
-(unsigned)contentCreationOrigin;
-(void)setContentCreationOrigin:(unsigned)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setTracking:(NSString *)arg1 ;
-(NSString *)tracking;
@end

