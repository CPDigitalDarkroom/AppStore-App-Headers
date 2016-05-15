/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNDirectMessageAPI.h>
#import <Twitter/TFNDirectMessageContextConfiguration.h>
#import <Twitter/TFNDirectMessageContextMediaDownloadProvider.h>
#import <Twitter/TFNDirectMessageContextMediaUploadProvider.h>
#import <Twitter/TFNDirectMessageContextNotificationCenter.h>
#import <Twitter/TFNDirectMessageContextSharedStatusCache.h>
#import <Twitter/TFNDirectMessageContextSharedUserCache.h>
#import <Twitter/TFNDirectMessageContext.h>

@protocol TFNDirectMessageContextHeartbeartObserver, TFNDirectMessageContextSpotlightMetadataProvider;
@class TFNDirectMessageCS2APIAdapter, TFNTwitterAccount, TFNDirectMessageContextState, NSMutableDictionary, TFNDirectMessageTypeaheadResultsDataSource, NSString;

@interface TFNDirectMessageTwitterAccountContext : NSObject <TFNDirectMessageAPI, TFNDirectMessageContextConfiguration, TFNDirectMessageContextMediaDownloadProvider, TFNDirectMessageContextMediaUploadProvider, TFNDirectMessageContextNotificationCenter, TFNDirectMessageContextSharedStatusCache, TFNDirectMessageContextSharedUserCache, TFNDirectMessageContext> {

	char _isDirectMessageSpotlightIndexingEnabled;
	char _isDirectMessageVideosAndGIFsEnabled;
	char _isDirectMessageVideosAndGIFsReadEnabled;
	char _active;
	char _notificationsSuppressed;
	id<TFNDirectMessageContextHeartbeartObserver> _heartbeatObserver;
	id<TFNDirectMessageContextSpotlightMetadataProvider> _spotlightMetadataProvider;
	TFNDirectMessageCS2APIAdapter* _cs2APIAdapter;
	unsigned _maximumConversationParticipantCount;
	TFNTwitterAccount* _account;
	TFNDirectMessageContextState* _state;
	NSMutableDictionary* _mediaDownloadsDictionary;
	TFNDirectMessageTypeaheadResultsDataSource* _dmTypeaheadResultsDataSource;

}

@property (assign,nonatomic,__weak) TFNTwitterAccount * account;                                                          //@synthesize account=_account - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                                                 //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) TFNDirectMessageContextState * state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mediaDownloadsDictionary;                                              //@synthesize mediaDownloadsDictionary=_mediaDownloadsDictionary - In the implementation block
@property (nonatomic,retain) TFNDirectMessageTypeaheadResultsDataSource * dmTypeaheadResultsDataSource;                   //@synthesize dmTypeaheadResultsDataSource=_dmTypeaheadResultsDataSource - In the implementation block
@property (assign,nonatomic) char notificationsSuppressed;                                                                //@synthesize notificationsSuppressed=_notificationsSuppressed - In the implementation block
@property (nonatomic,readonly) TFNDirectMessageCS2APIAdapter * cs2APIAdapter;                                             //@synthesize cs2APIAdapter=_cs2APIAdapter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isDirectMessageSpotlightIndexingEnabled;                                              //@synthesize isDirectMessageSpotlightIndexingEnabled=_isDirectMessageSpotlightIndexingEnabled - In the implementation block
@property (nonatomic,readonly) char isDirectMessageVideosAndGIFsEnabled;                                                  //@synthesize isDirectMessageVideosAndGIFsEnabled=_isDirectMessageVideosAndGIFsEnabled - In the implementation block
@property (nonatomic,readonly) char isDirectMessageVideosAndGIFsReadEnabled;                                              //@synthesize isDirectMessageVideosAndGIFsReadEnabled=_isDirectMessageVideosAndGIFsReadEnabled - In the implementation block
@property (nonatomic,readonly) char acceptsDirectMessagesFromAnyone; 
@property (nonatomic,retain) id<TFNDirectMessageContextSpotlightMetadataProvider> spotlightMetadataProvider;              //@synthesize spotlightMetadataProvider=_spotlightMetadataProvider - In the implementation block
@property (nonatomic,readonly) unsigned maximumConversationParticipantCount;                                              //@synthesize maximumConversationParticipantCount=_maximumConversationParticipantCount - In the implementation block
@property (nonatomic,readonly) char shouldShowSensitiveContent; 
@property (assign,nonatomic) char alwaysShowSensitiveMedia; 
@property (nonatomic,readonly) char shouldShowSensitiveMedia; 
@property (nonatomic,readonly) id<TFNDirectMessageAPI> api; 
@property (nonatomic,readonly) id<TFNDirectMessageContextConfiguration> configuration; 
@property (nonatomic,readonly) id<TFNDirectMessageContextMediaDownloadProvider> mediaDownloadProvider; 
@property (nonatomic,readonly) id<TFNDirectMessageContextMediaUploadProvider> mediaUploadProvider; 
@property (nonatomic,readonly) id<TFNDirectMessageContextSharedStatusCache> statusCache; 
@property (nonatomic,readonly) id<TFNDirectMessageContextSharedUserCache> userCache; 
@property (nonatomic,readonly) id<TFNDirectMessageContextConversationFactory> conversationFactory; 
@property (nonatomic,readonly) id<TFNDirectMessageContextNotificationCenter> notificationCenter; 
@property (assign,nonatomic,__weak) id<TFNDirectMessageContextHeartbeartObserver> heartbeatObserver;                      //@synthesize heartbeatObserver=_heartbeatObserver - In the implementation block
@property (nonatomic,readonly) id<TFNDirectMessageContextUserActivityLog> userActivityLog; 
@property (nonatomic,readonly) id<TFNDirectMessageContextUserProfileImageCache> userProfileImageCache; 
@property (nonatomic,readonly) id<TFNDirectMessageInbox> inbox; 
@property (nonatomic,readonly) id<TFNDirectMessageUser> authenticatedUser; 
@property (nonatomic,readonly) long long authenticatedUserID; 
+(id)sharedContextForAccount:(id)arg1 ;
+(void)setDirectMessageAccountContextFactory:(id)arg1 ;
+(id)_sharedContextForAccount:(id)arg1 contextKey:(id)arg2 ;
+(id)directMessageContextForContextKey:(id)arg1 ;
-(id<TFNDirectMessageUser>)authenticatedUser;
-(id)inboxActions;
-(void)setHeartbeatObserver:(id<TFNDirectMessageContextHeartbeartObserver>)arg1 ;
-(id)definitiveUser:(id)arg1 ;
-(id)statusForID:(long long)arg1 ;
-(void)_accountDidUpdate:(id)arg1 ;
-(unsigned)maximumConversationParticipantCount;
-(id<TFNDirectMessageContextMediaDownloadProvider>)mediaDownloadProvider;
-(void)downloadMediaFromURL:(id)arg1 size:(CGSize)arg2 contentMode:(int)arg3 completion:(/*^block*/id)arg4 ;
-(id<TFNDirectMessageInbox>)inbox;
-(id<TFNDirectMessageContextConversationFactory>)conversationFactory;
-(id)userForID:(long long)arg1 ;
-(id<TFNDirectMessageContextUserActivityLog>)userActivityLog;
-(id<TFNDirectMessageContextSharedUserCache>)userCache;
-(long long)authenticatedUserID;
-(id)definitiveUsers:(id)arg1 ;
-(char)isDirectMessageVideosAndGIFsEnabled;
-(id)conversationActionsWithConversation:(id)arg1 ;
-(char)alwaysShowSensitiveMedia;
-(char)isDirectMessageVideosAndGIFsReadEnabled;
-(void)setAlwaysShowSensitiveMedia:(char)arg1 ;
-(void)_userDidLoad:(id)arg1 ;
-(char)isDirectMessageSpotlightIndexingEnabled;
-(char)acceptsDirectMessagesFromAnyone;
-(id<TFNDirectMessageContextSpotlightMetadataProvider>)spotlightMetadataProvider;
-(void)setSpotlightMetadataProvider:(id<TFNDirectMessageContextSpotlightMetadataProvider>)arg1 ;
-(char)shouldShowSensitiveContent;
-(char)shouldShowSensitiveMedia;
-(void)_accountDidBecomeActive:(id)arg1 ;
-(void)_accountDidBecomeInactive:(id)arg1 ;
-(void)_cacheAccountUserIfNeeded;
-(TFNDirectMessageCS2APIAdapter *)cs2APIAdapter;
-(NSMutableDictionary *)mediaDownloadsDictionary;
-(void)setMediaDownloadsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setNotificationsSuppressed:(char)arg1 ;
-(char)notificationsSuppressed;
-(void)_updateActive;
-(void)_cancelMediaDownloads;
-(id)directMessageConversationEntries:(id)arg1 fromEntry:(id)arg2 toEntry:(id)arg3 limit:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)directMessagePermissionsForUserIDs:(id)arg1 usernames:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)directMessageUserInboxFromEntryID:(id)arg1 toEntryID:(id)arg2 limit:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)directMessageUserUpdatesSinceCursor:(id)arg1 inboxMinID:(id)arg2 activeConversationID:(id)arg3 polling:(char)arg4 completion:(/*^block*/id)arg5 ;
-(id)createConversationWithParticipants:(id)arg1 text:(id)arg2 attachment:(id)arg3 requestID:(id)arg4 impressionID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)conversationMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)sendMessageToConversationID:(id)arg1 text:(id)arg2 attachment:(id)arg3 requestID:(id)arg4 impressionID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)renameGroupConversation:(id)arg1 newName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)updateGroupConversation:(id)arg1 avatarMediaID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)removeGroupConversationAvatar:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)addParticipants:(id)arg1 toConversationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)deleteMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deleteConversationWithConversationID:(id)arg1 lastEventID:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)markMessageThreadWithConversationID:(id)arg1 readUpToEventID:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)markAllConversationsReadUpToEventID:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)updateLastSeenEventID:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)disableNotificationsForConversationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)enableNotificationsForConversationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelDownloadForURL:(id)arg1 ;
-(char)hasDownloadForURL:(id)arg1 ;
-(char)authenticatedUserDidUploadAsset:(id)arg1 ;
-(void)uploadAsset:(id)arg1 ;
-(void)performBlockWithSuppressedNotifications:(/*^block*/id)arg1 ;
-(char)isAuthenticatedWithUser:(id)arg1 ;
-(void)updateWithContextState:(id)arg1 ;
-(id<TFNDirectMessageAPI>)api;
-(id<TFNDirectMessageContextMediaUploadProvider>)mediaUploadProvider;
-(id<TFNDirectMessageContextSharedStatusCache>)statusCache;
-(id<TFNDirectMessageContextHeartbeartObserver>)heartbeatObserver;
-(id<TFNDirectMessageContextUserProfileImageCache>)userProfileImageCache;
-(TFNDirectMessageTypeaheadResultsDataSource *)dmTypeaheadResultsDataSource;
-(void)setDmTypeaheadResultsDataSource:(TFNDirectMessageTypeaheadResultsDataSource *)arg1 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(TFNDirectMessageContextState *)state;
-(char)isActive;
-(void)setState:(TFNDirectMessageContextState *)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)reset;
-(void)postNotification:(id)arg1 ;
-(void)setActive:(char)arg1 ;
-(id<TFNDirectMessageContextConfiguration>)configuration;
-(id)userDefaults;
-(id<TFNDirectMessageContextNotificationCenter>)notificationCenter;
-(id)initWithAccount:(id)arg1 ;
-(void)refresh;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

