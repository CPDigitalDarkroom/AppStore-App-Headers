/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBRequestDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMNetworkProtocolChangeListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNLegacyThreadProviding.h>

@protocol FBMThreadSetCacheListener, FBProvider, FBMNetworkProtocolChangeListener;
@class NSMutableDictionary, FBMThreadParticipantFilter, FBMNetworkProtocolController, FBMThreadSetObserverAnnouncer, NSString;

@interface FBMThreadSet : NSObject <FBRequestDelegate, FBMNetworkProtocolChangeListener, FBSessionClassProvidable, MNLegacyThreadProviding> {

	long long _muteUntil;
	char _hasUnseenThreads;
	id<FBMThreadSetCacheListener> _cacheListener;
	NSMutableDictionary* _threadsByFbId;
	NSMutableDictionary* _threadFbIdBySha1;
	NSMutableDictionary* _threadFbIdByUserId;
	FBMThreadParticipantFilter* _threadParticipantFilter;
	id<FBProvider> _authenticationManagerProvider;
	FBMNetworkProtocolController* _networkProtocolController;
	id<FBMNetworkProtocolChangeListener> _networkProtocolChangeListenerDispatcher;
	FBMThreadSetObserverAnnouncer* _announcer;
	unsigned long long _threadlistSyncActionId;
	long long _lastVisibleActionId;

}

@property (nonatomic,retain) NSMutableDictionary * threadsByFbId;                                                       //@synthesize threadsByFbId=_threadsByFbId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * threadFbIdBySha1;                                                    //@synthesize threadFbIdBySha1=_threadFbIdBySha1 - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * threadFbIdByUserId;                                                  //@synthesize threadFbIdByUserId=_threadFbIdByUserId - In the implementation block
@property (nonatomic,retain) FBMThreadParticipantFilter * threadParticipantFilter;                                      //@synthesize threadParticipantFilter=_threadParticipantFilter - In the implementation block
@property (nonatomic,retain) id<FBProvider> authenticationManagerProvider;                                              //@synthesize authenticationManagerProvider=_authenticationManagerProvider - In the implementation block
@property (nonatomic,retain) FBMNetworkProtocolController * networkProtocolController;                                  //@synthesize networkProtocolController=_networkProtocolController - In the implementation block
@property (nonatomic,retain) id<FBMNetworkProtocolChangeListener> networkProtocolChangeListenerDispatcher;              //@synthesize networkProtocolChangeListenerDispatcher=_networkProtocolChangeListenerDispatcher - In the implementation block
@property (nonatomic,retain) FBMThreadSetObserverAnnouncer * announcer;                                                 //@synthesize announcer=_announcer - In the implementation block
@property (assign,nonatomic) long long muteUntil;                                                                       //@synthesize muteUntil=_muteUntil - In the implementation block
@property (assign,nonatomic) unsigned long long threadlistSyncActionId;                                                 //@synthesize threadlistSyncActionId=_threadlistSyncActionId - In the implementation block
@property (assign,nonatomic) char hasUnseenThreads;                                                                     //@synthesize hasUnseenThreads=_hasUnseenThreads - In the implementation block
@property (assign,nonatomic) long long lastVisibleActionId;                                                             //@synthesize lastVisibleActionId=_lastVisibleActionId - In the implementation block
@property (assign,nonatomic,__weak) id<FBMThreadSetCacheListener> cacheListener;                                        //@synthesize cacheListener=_cacheListener - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)getThreadByFbId:(id)arg1 ;
-(void)removeThreadSetObserver:(id)arg1 ;
-(void)addThreadSetObserver:(id)arg1 ;
-(id)getThreadByThreadKey:(id)arg1 ;
-(id)allThreadsIncludingArchived:(char)arg1 ;
-(void)clearThreads;
-(FBMThreadSetObserverAnnouncer *)announcer;
-(void)setAnnouncer:(FBMThreadSetObserverAnnouncer *)arg1 ;
-(long long)muteUntil;
-(void)setMuteUntil:(long long)arg1 ;
-(char)hasUnseenThreads;
-(unsigned long long)threadlistSyncActionId;
-(void)setHasUnseenThreads:(char)arg1 ;
-(void)addThread:(id)arg1 ;
-(void)removeThreadWithFbId:(id)arg1 ;
-(void)setLastVisibleActionId:(long long)arg1 ;
-(void)setThreadlistSyncActionId:(unsigned long long)arg1 ;
-(void)removeThreadWithThreadKey:(id)arg1 ;
-(void)networkProtocolDidChange:(unsigned)arg1 ;
-(FBMNetworkProtocolController *)networkProtocolController;
-(void)setNetworkProtocolController:(FBMNetworkProtocolController *)arg1 ;
-(id<FBMNetworkProtocolChangeListener>)networkProtocolChangeListenerDispatcher;
-(void)setNetworkProtocolChangeListenerDispatcher:(id<FBMNetworkProtocolChangeListener>)arg1 ;
-(id)getThreadByUserId:(id)arg1 ;
-(long long)lastVisibleActionId;
-(id)getThreadBySyncThreadKey:(id)arg1 ;
-(id)initWithThreadParticipantFilter:(id)arg1 authenticationManagerProvider:(id)arg2 networkProtocolController:(id)arg3 ;
-(void)_removeThreadFromAllIndexes:(id)arg1 ;
-(int)numThreads;
-(void)markAllThreadsAsDirty;
-(char)hasMutedThreads;
-(id<FBMThreadSetCacheListener>)cacheListener;
-(void)setCacheListener:(id<FBMThreadSetCacheListener>)arg1 ;
-(NSMutableDictionary *)threadsByFbId;
-(void)setThreadsByFbId:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)threadFbIdBySha1;
-(void)setThreadFbIdBySha1:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)threadFbIdByUserId;
-(void)setThreadFbIdByUserId:(NSMutableDictionary *)arg1 ;
-(FBMThreadParticipantFilter *)threadParticipantFilter;
-(void)setThreadParticipantFilter:(FBMThreadParticipantFilter *)arg1 ;
-(id<FBProvider>)authenticationManagerProvider;
-(void)setAuthenticationManagerProvider:(id<FBProvider>)arg1 ;
-(void)dealloc;
@end

