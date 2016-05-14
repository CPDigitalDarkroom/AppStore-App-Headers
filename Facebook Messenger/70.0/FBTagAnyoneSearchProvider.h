/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBUserSession;

@interface FBTagAnyoneSearchProvider : NSObject {

	NSString* _actorOverrideFBID;
	NSString* _searchContext;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBUserSession * session;              //@synthesize session=_session - In the implementation block
-(id)initWithSession:(id)arg1 actorOverrideFBID:(id)arg2 searchContext:(id)arg3 ;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(FBUserSession *)session;
@end

