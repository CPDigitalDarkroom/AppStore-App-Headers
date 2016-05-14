/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString, FBComposerAuthorProfileBadgeFetchStatus;

@interface FBComposerAuthorProfileBadge : FBValueObject <NSCopying, NSCoding> {

	NSURL* _badgeURL;
	NSString* _storyGraphQLID;
	FBComposerAuthorProfileBadgeFetchStatus* _fetchStatus;

}

@property (nonatomic,copy,readonly) NSURL * badgeURL;                                                   //@synthesize badgeURL=_badgeURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyGraphQLID;                                          //@synthesize storyGraphQLID=_storyGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAuthorProfileBadgeFetchStatus * fetchStatus;              //@synthesize fetchStatus=_fetchStatus - In the implementation block
-(FBComposerAuthorProfileBadgeFetchStatus *)fetchStatus;
-(id)initWithBadgeURL:(id)arg1 storyGraphQLID:(id)arg2 fetchStatus:(id)arg3 ;
-(NSURL *)badgeURL;
-(NSString *)storyGraphQLID;
@end

