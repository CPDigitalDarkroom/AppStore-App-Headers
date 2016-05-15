/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNScopedContainerViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/TFNScopedContainerViewControllerDelegate.h>

@class T1ListsFollowsViewController, T1ListsFollowingViewController, TFNTwitterAccount, TFNTwitterUser, NSString;

@interface T1ListsViewController : TFNScopedContainerViewController <TFNTwitterAuthenticated, TFNScopedContainerViewControllerDelegate> {

	T1ListsFollowsViewController* _subscribedListsViewController;
	T1ListsFollowingViewController* _memberOfViewController;
	TFNTwitterAccount* _account;
	TFNTwitterUser* _user;

}

@property (nonatomic,retain) TFNTwitterUser * user;                    //@synthesize user=_user - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
-(id)scribePage;
-(char)t1_showsSearchButton;
-(char)t1_showsComposeButton;
-(void)_addList:(id)arg1 ;
-(id)scopedContainerViewController:(id)arg1 titleForSegmentAtIndex:(int)arg2 ;
-(id)scribe;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

