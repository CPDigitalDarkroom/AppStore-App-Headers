/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNItemsDataViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1CustomTimelineHeaderDelegate.h>

@class NSArray, TFNBarButtonItem, T1CustomTimelineTableRowAdapter, TFNTwitterAccount, TFNTwitterCustomTimeline, T1StatusTableRowAdapter, TFNTwitterCustomTimelineStream, NSString;

@interface T1CustomTimelineViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, T1CustomTimelineHeaderDelegate> {

	NSArray* _sectionIndexTypeMap;
	char _isLayoutSubviewsDone;
	char _restoredPersistedScrollPosition;
	TFNBarButtonItem* _shareBarButtonItem;
	T1CustomTimelineTableRowAdapter* _adapter;
	TFNTwitterAccount* _account;
	TFNTwitterCustomTimeline* _timeline;
	T1StatusTableRowAdapter* _statusAdapter;
	TFNTwitterCustomTimelineStream* _stream;

}

@property (nonatomic,retain) T1StatusTableRowAdapter * statusAdapter;              //@synthesize statusAdapter=_statusAdapter - In the implementation block
@property (nonatomic,retain) TFNTwitterCustomTimelineStream * stream;              //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) TFNTwitterCustomTimeline * timeline;                  //@synthesize timeline=_timeline - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                          //@synthesize account=_account - In the implementation block
+(id)_numberForCustomTimelineID:(id)arg1 ;
-(id)scribePage;
-(id)scribeSection;
-(void)setTimeline:(TFNTwitterCustomTimeline *)arg1 ;
-(void)customTimelineHeaderCell:(id)arg1 didTapFollow:(id)arg2 ;
-(TFNTwitterCustomTimeline *)timeline;
-(void)_updateSections;
-(T1StatusTableRowAdapter *)statusAdapter;
-(char)t1_showsSearchButton;
-(char)t1_showsComposeButton;
-(void)setStatusAdapter:(T1StatusTableRowAdapter *)arg1 ;
-(id)autosaveName;
-(id)_scrollPositionUserDefaultsKey;
-(void)_streamDidUpdate;
-(void)_streamDidUpdateFromAPI:(id)arg1 ;
-(void)_timelineDidUpdate:(id)arg1 ;
-(void)_restorePersistedScrollPosition;
-(id)_shareBarButtonItem;
-(char)_shareButtonIsAvailable;
-(void)_persistScrollPosition;
-(int)_sectionTypeForSectionIndex:(unsigned)arg1 ;
-(id)_createSectionIndexTypeMap;
-(void)_updateTableWithNewMap:(id)arg1 ;
-(unsigned)_sectionIndexForSectionType:(int)arg1 ;
-(void)loadTop:(id)arg1 ;
-(char)isLoadingTop;
-(char)shouldHighlightItem:(id)arg1 atIndexPath:(id)arg2 ;
-(id)scribe;
-(void)dealloc;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)update:(char)arg1 ;
-(void)_updateNavigationItem;
-(void)setStream:(TFNTwitterCustomTimelineStream *)arg1 ;
-(void)_shareButtonTapped:(id)arg1 ;
-(TFNTwitterCustomTimelineStream *)stream;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

