/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TFNTwitterAPICredentials : NSObject {

	NSString* _username;
	NSString* _appToken;
	NSString* _guestToken;
	NSString* _oAuthToken;
	NSString* _oAuthTokenSecret;
	long long _userID;

}

@property (nonatomic,readonly) long long userID;                            //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) NSString * username;                         //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * appToken;                         //@synthesize appToken=_appToken - In the implementation block
@property (nonatomic,readonly) NSString * guestToken;                       //@synthesize guestToken=_guestToken - In the implementation block
@property (nonatomic,readonly) NSString * oAuthToken;                       //@synthesize oAuthToken=_oAuthToken - In the implementation block
@property (nonatomic,readonly) NSString * oAuthTokenSecret;                 //@synthesize oAuthTokenSecret=_oAuthTokenSecret - In the implementation block
@property (nonatomic,readonly) NSString * oAuthConsumerKey; 
@property (nonatomic,readonly) NSString * oAuthConsumerSecret; 
-(NSString *)guestToken;
-(id)initWithUserName:(id)arg1 userID:(long long)arg2 oAuthToken:(id)arg3 oAuthTokenSecret:(id)arg4 guestToken:(id)arg5 appToken:(id)arg6 ;
-(NSString *)oAuthTokenSecret;
-(NSString *)oAuthToken;
-(NSString *)oAuthConsumerKey;
-(NSString *)oAuthConsumerSecret;
-(id)description;
-(long long)userID;
-(NSString *)appToken;
-(NSString *)username;
@end

