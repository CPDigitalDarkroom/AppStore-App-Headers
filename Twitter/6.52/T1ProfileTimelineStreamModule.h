/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1ItemsDataModule.h>

@class NSArray, TFNTwitterTimelineCursor, NSNumber, TFNTwitterAccount, TFSTwitterAPITimelineUserCommand, NSString, TFNItemsDataViewAdapter;

@interface T1ProfileTimelineStreamModule : NSObject <T1ItemsDataModule> {

	char _loading;
	char _requiresLoad;
	NSArray* _statuses;
	TFNTwitterTimelineCursor* _cursor;
	NSNumber* _count;
	TFNTwitterAccount* _account;
	TFSTwitterAPITimelineUserCommand* _command;

}

@property (assign,nonatomic) char loading;                                              //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) char requiresLoad;                                         //@synthesize requiresLoad=_requiresLoad - In the implementation block
@property (nonatomic,retain) NSArray * statuses;                                        //@synthesize statuses=_statuses - In the implementation block
@property (nonatomic,retain) TFNTwitterTimelineCursor * cursor;                         //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) NSNumber * count;                                        //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                             //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) TFSTwitterAPITimelineUserCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) NSArray * statusObjects; 
@property (nonatomic,readonly) unsigned maximumDisplayStatuses; 
@property (nonatomic,readonly) char hasLoadedMaxTweets; 
@property (nonatomic,readonly) char isLoading; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TFNItemsDataViewAdapter * dataViewAdapter; 
@property (nonatomic,readonly) NSArray * moduleDataItems; 
@property (assign,nonatomic) int supportedOrientation; 
-(NSArray *)moduleDataItems;
-(char)postsUpdateNotifications;
-(NSArray *)statuses;
-(/*^block*/id)_responseBlock;
-(void)_streamUpdated:(id)arg1 ;
-(char)requiresLoad;
-(void)loadTweets;
-(NSArray *)statusObjects;
-(char)_hasTweets;
-(void)setRequiresLoad:(char)arg1 ;
-(void)setStatuses:(NSArray *)arg1 ;
-(char)hasLoadedMaxTweets;
-(id)initWithAccount:(id)arg1 count:(id)arg2 userID:(id)arg3 ;
-(unsigned)maximumDisplayStatuses;
-(TFSTwitterAPITimelineUserCommand *)command;
-(void)dealloc;
-(char)isHidden;
-(NSNumber *)count;
-(char)isLoading;
-(TFNTwitterTimelineCursor *)cursor;
-(void)setCursor:(TFNTwitterTimelineCursor *)arg1 ;
-(void)setLoading:(char)arg1 ;
-(TFNTwitterAccount *)account;
-(char)loading;
@end

