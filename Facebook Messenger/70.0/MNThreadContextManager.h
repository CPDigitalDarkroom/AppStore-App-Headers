/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol MNAuthenticationManager;
@class MNThreadContextLoader, MNThreadContextManagerListenerAnnouncer, FBUserSession, NSString;

@interface MNThreadContextManager : NSObject <FBClassProvidable> {

	MNThreadContextLoader* _threadContextLoader;
	MNThreadContextManagerListenerAnnouncer* _threadContextManagerListenerAnnoncer;
	FBUserSession* _session;
	id<MNAuthenticationManager> _authenticationManager;
	unsigned _threadContextExperimentContextState;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadContextViewModelForGroupThreadKey:(id)arg1 oldestLoadedMessageSenderId:(id)arg2 isFirstMessageLoaded:(char)arg3 usersByUserId:(id)arg4 groupName:(id)arg5 ;
-(id)threadContextViewModelForCanonicalThreadKey:(id)arg1 isFirstMessageLoaded:(char)arg2 usersByUserId:(id)arg3 ;
-(id)threadContextViewModelForSecureThreadKey:(id)arg1 isFirstMessageLoaded:(char)arg2 usersByUserId:(id)arg3 ;
-(id)initWithThreadContextLaoder:(id)arg1 threadContextManagerListenerAnnoncer:(id)arg2 authenticationManager:(id)arg3 session:(id)arg4 ;
-(id)_loadThreadContextForGroupThreadKey:(id)arg1 firstSender:(id)arg2 groupName:(id)arg3 ;
-(id)_loadThreadContextForCanonicalThreadKey:(id)arg1 usersByUserId:(id)arg2 ;
-(id)_loadThreadContextForSecureThreadKey:(id)arg1 usersByUserId:(id)arg2 ;
-(void)_doLoadThreadContextCompletionForThreadKey:(id)arg1 error:(id)arg2 ;
@end

