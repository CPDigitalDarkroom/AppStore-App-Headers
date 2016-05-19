/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface SPTGeniusLoggingService : NSObject {

	char _backgrounded;
	NSMutableDictionary* _loggedItems;
	NSString* _featureId;

}

@property (nonatomic,retain) NSMutableDictionary * loggedItems;                    //@synthesize loggedItems=_loggedItems - In the implementation block
@property (nonatomic,retain) NSString * featureId;                                 //@synthesize featureId=_featureId - In the implementation block
@property (assign,getter=isBackgrounded,nonatomic) char backgrounded;              //@synthesize backgrounded=_backgrounded - In the implementation block
-(void)setFeatureId:(NSString *)arg1 ;
-(id)initWithFeatureId:(id)arg1 ;
-(void)logImpressionWithTrackURI:(id)arg1 pageId:(id)arg2 sectionId:(id)arg3 blockIndex:(int)arg4 itemIndex:(int)arg5 targetUri:(id)arg6 impressionType:(id)arg7 renderType:(id)arg8 ;
-(void)logPageImpressionWithTrackURI:(id)arg1 ;
-(void)registerForBackgroundNotifications;
-(void)logUserImpressionMessageWithTrackURI:(id)arg1 pageId:(id)arg2 sectionId:(id)arg3 blockIndex:(unsigned)arg4 itemIndex:(unsigned)arg5 targetURI:(id)arg6 impressionType:(id)arg7 renderType:(id)arg8 ;
-(id)createImpressionKeyWithBlockIndex:(id)arg1 itemIndex:(id)arg2 impressionType:(id)arg3 ;
-(char)impressionIsNotLoggedForKey:(id)arg1 ;
-(void)addItemToLoggedItemsForKey:(id)arg1 ;
-(NSMutableDictionary *)loggedItems;
-(void)unregisterForBackgroundNotifications;
-(void)logPageImpressionWithSectionName:(id)arg1 pageIndex:(unsigned)arg2 ;
-(void)setLoggedItems:(NSMutableDictionary *)arg1 ;
-(void)logUserInteractionMessageWithTrackURI:(id)arg1 pageId:(id)arg2 sectionId:(id)arg3 blockIndex:(int)arg4 itemIndex:(int)arg5 targetURI:(id)arg6 interactionType:(id)arg7 userIntent:(id)arg8 ;
-(void)dealloc;
-(char)isBackgrounded;
-(void)setBackgrounded:(char)arg1 ;
-(NSString *)featureId;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
@end

