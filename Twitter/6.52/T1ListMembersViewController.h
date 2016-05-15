/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1UsersViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Twitter/T1TypeaheadTableViewControllerDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <UIKit/UITextViewDelegate.h>

@class TFNTwitterList, TFNTwitterUserListMembersList, UIView, T1SearchBarView, T1DirectMessagePeopleTypeaheadViewController, NSString, TFNTwitterAccount;

@interface T1ListMembersViewController : T1UsersViewController <UITextFieldDelegate, T1TypeaheadTableViewControllerDelegate, TFNTwitterAuthenticated, UITextViewDelegate> {

	char _isNewList;
	TFNTwitterList* _list;
	int _mode;
	TFNTwitterUserListMembersList* _membersList;
	UIView* _topBackgroundView;
	UIView* _topBorderView;
	T1SearchBarView* _searchBarView;
	T1DirectMessagePeopleTypeaheadViewController* _typeaheadViewController;

}

@property (nonatomic,retain) TFNTwitterUserListMembersList * membersList;                                         //@synthesize membersList=_membersList - In the implementation block
@property (nonatomic,retain) UIView * topBackgroundView;                                                          //@synthesize topBackgroundView=_topBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * topBorderView;                                                              //@synthesize topBorderView=_topBorderView - In the implementation block
@property (nonatomic,retain) T1SearchBarView * searchBarView;                                                     //@synthesize searchBarView=_searchBarView - In the implementation block
@property (nonatomic,retain) T1DirectMessagePeopleTypeaheadViewController * typeaheadViewController;              //@synthesize typeaheadViewController=_typeaheadViewController - In the implementation block
@property (nonatomic,retain) TFNTwitterList * list;                                                               //@synthesize list=_list - In the implementation block
@property (assign,nonatomic) int mode;                                                                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) char isNewList;                                                                      //@synthesize isNewList=_isNewList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account; 
-(id)scribePage;
-(id)scribeSection;
-(void)requestUsers;
-(void)typeaheadTableViewController:(id)arg1 didSelectUsername:(id)arg2 index:(int)arg3 ;
-(void)typeaheadTableViewController:(id)arg1 didSelectUser:(id)arg2 index:(int)arg3 ;
-(T1DirectMessagePeopleTypeaheadViewController *)typeaheadViewController;
-(void)setTypeaheadViewController:(T1DirectMessagePeopleTypeaheadViewController *)arg1 ;
-(void)_unregisterNotificationHandlers;
-(void)setIsNewList:(char)arg1 ;
-(TFNTwitterUserListMembersList *)membersList;
-(void)setMembersList:(TFNTwitterUserListMembersList *)arg1 ;
-(void)textFieldEditingChanged:(id)arg1 ;
-(char)isNewList;
-(UIView *)topBorderView;
-(T1SearchBarView *)searchBarView;
-(void)_membersListDidUpdate:(id)arg1 ;
-(void)_clearSearch;
-(void)_configureUserCell:(id)arg1 ;
-(void)_removeUserFromList:(id)arg1 ;
-(id)_usernameFromSearchText:(id)arg1 ;
-(void)_addUserWithUsername:(id)arg1 ;
-(void)setTopBorderView:(UIView *)arg1 ;
-(void)setSearchBarView:(T1SearchBarView *)arg1 ;
-(void)layoutGuidesDidChange:(int)arg1 ;
-(char)tfn_prefersNavigationBarShadowHidden;
-(id)scribe;
-(void)_registerNotificationHandlers;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)dismiss;
-(void)setTopBackgroundView:(UIView *)arg1 ;
-(UIView *)topBackgroundView;
-(void)setList:(TFNTwitterList *)arg1 ;
-(TFNTwitterList *)list;
@end

