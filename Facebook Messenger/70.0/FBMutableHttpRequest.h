/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBHttpRequest.h>

@class NSURLRequest, NSString, FBScenePath;

@interface FBMutableHttpRequest : NSObject <FBHttpRequest> {

	char _allowRetry;
	char _disableCustomProtocols;
	char _silentLoading;
	char _shouldHandleCookies;
	char _enableAuthentication;
	char _shouldContinueInBackground;
	NSURLRequest* _request;
	NSString* _logNamespace;
	NSString* _logName;
	int _priority;
	unsigned _priorityOrder;
	unsigned _hardTimeout;
	NSString* _actorForAuthentication;
	FBScenePath* _scenePath;

}

@property (nonatomic,retain) NSURLRequest * request;                       //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSString * logNamespace;                        //@synthesize logNamespace=_logNamespace - In the implementation block
@property (nonatomic,copy) NSString * logName;                             //@synthesize logName=_logName - In the implementation block
@property (assign,nonatomic) int priority;                                 //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned priorityOrder;                       //@synthesize priorityOrder=_priorityOrder - In the implementation block
@property (assign,nonatomic) char allowRetry;                              //@synthesize allowRetry=_allowRetry - In the implementation block
@property (assign,nonatomic) char disableCustomProtocols;                  //@synthesize disableCustomProtocols=_disableCustomProtocols - In the implementation block
@property (assign,nonatomic) char silentLoading;                           //@synthesize silentLoading=_silentLoading - In the implementation block
@property (assign,nonatomic) unsigned hardTimeout;                         //@synthesize hardTimeout=_hardTimeout - In the implementation block
@property (assign,nonatomic) char shouldHandleCookies;                     //@synthesize shouldHandleCookies=_shouldHandleCookies - In the implementation block
@property (assign,nonatomic) char enableAuthentication;                    //@synthesize enableAuthentication=_enableAuthentication - In the implementation block
@property (nonatomic,copy) NSString * actorForAuthentication;              //@synthesize actorForAuthentication=_actorForAuthentication - In the implementation block
@property (assign,nonatomic) char shouldContinueInBackground;              //@synthesize shouldContinueInBackground=_shouldContinueInBackground - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                    //@synthesize scenePath=_scenePath - In the implementation block
-(void)setHardTimeout:(unsigned)arg1 ;
-(void)setLogNamespace:(NSString *)arg1 ;
-(void)setAllowRetry:(char)arg1 ;
-(char)shouldContinueInBackground;
-(FBScenePath *)scenePath;
-(void)setShouldContinueInBackground:(char)arg1 ;
-(void)setDisableCustomProtocols:(char)arg1 ;
-(unsigned)hardTimeout;
-(char)disableCustomProtocols;
-(NSString *)logNamespace;
-(char)allowRetry;
-(void)setSilentLoading:(char)arg1 ;
-(unsigned)priorityOrder;
-(char)silentLoading;
-(char)enableAuthentication;
-(NSString *)actorForAuthentication;
-(void)setPriorityOrder:(unsigned)arg1 ;
-(void)setEnableAuthentication:(char)arg1 ;
-(void)setActorForAuthentication:(NSString *)arg1 ;
-(NSURLRequest *)request;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(void)setLogName:(NSString *)arg1 ;
-(NSString *)logName;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(char)shouldHandleCookies;
-(void)setShouldHandleCookies:(char)arg1 ;
@end

