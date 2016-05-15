/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNItemsDataViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/T1CustomTimelineHeaderDelegate.h>

@class T1CustomTimelineTableRowAdapter, TFNTwitterAccount, TFNTwitterUser, TFNTwitterCustomTimelineList, NSString;

@interface T1CustomTimelineFollowingListViewController : TFNItemsDataViewController <TFNTwitterAuthenticated, T1CustomTimelineHeaderDelegate> {

	T1CustomTimelineTableRowAdapter* _tableRowAdapter;
	TFNTwitterAccount* _account;
	TFNTwitterUser* _user;
	TFNTwitterCustomTimelineList* _timelineList;

}

@property (nonatomic,retain) TFNTwitterUser * user;                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) TFNTwitterCustomTimelineList * timelineList;              //@synthesize timelineList=_timelineList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                              //@synthesize account=_account - In the implementation block
-(id)scribePage;
-(id)scribeSection;
-(void)customTimelineHeaderCell:(id)arg1 didTapFollow:(id)arg2 ;
-(void)_updateSections;
-(void)_globalTimelineDidUpdate:(id)arg1 ;
-(void)_customTimelineListDidUpdate:(id)arg1 ;
-(void)filterTimelines;
-(char)showCreateButton;
-(TFNTwitterCustomTimelineList *)timelineList;
-(void)setTimelineList:(TFNTwitterCustomTimelineList *)arg1 ;
-(id)scribe;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillUnload;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

