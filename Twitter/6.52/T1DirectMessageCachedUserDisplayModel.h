/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNDirectMessageContext, TFNDirectMessageUser;
@class TFNTwitterUser;

@interface T1DirectMessageCachedUserDisplayModel : NSObject {

	TFNTwitterUser* _user;
	id<TFNDirectMessageContext> _context;
	id<TFNDirectMessageUser> _cachedUser;

}

@property (nonatomic,readonly) id<TFNDirectMessageContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<TFNDirectMessageUser> cachedUser;              //@synthesize cachedUser=_cachedUser - In the implementation block
@property (nonatomic,readonly) TFNTwitterUser * user;                            //@synthesize user=_user - In the implementation block
+(id)sharedCachedUserToDefinitiveUserMap;
-(id)initWithCachedUser:(id)arg1 account:(id)arg2 ;
-(id)initWithCachedUser:(id)arg1 context:(id)arg2 ;
-(id<TFNDirectMessageUser>)cachedUser;
-(TFNTwitterUser *)user;
-(id)init;
-(id<TFNDirectMessageContext>)context;
@end

