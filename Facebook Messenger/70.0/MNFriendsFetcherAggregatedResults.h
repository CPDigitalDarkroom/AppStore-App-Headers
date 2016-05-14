/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNFriendsFetcherAggregatedResults : FBValueObject <NSCopying> {

	NSArray* _activeFriends;
	NSArray* _activeTopFriends;
	NSArray* _messengerFriends;
	NSArray* _messengerTopFriends;

}

@property (nonatomic,copy,readonly) NSArray * activeFriends;                    //@synthesize activeFriends=_activeFriends - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeTopFriends;                 //@synthesize activeTopFriends=_activeTopFriends - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messengerFriends;                 //@synthesize messengerFriends=_messengerFriends - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messengerTopFriends;              //@synthesize messengerTopFriends=_messengerTopFriends - In the implementation block
-(NSArray *)activeFriends;
-(NSArray *)activeTopFriends;
-(NSArray *)messengerFriends;
-(NSArray *)messengerTopFriends;
-(id)initWithActiveFriends:(id)arg1 activeTopFriends:(id)arg2 messengerFriends:(id)arg3 messengerTopFriends:(id)arg4 ;
@end

