/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/TFNBinaryChoiceDelegate.h>

@protocol TFNTwitterFollowControlDelegate;
@class TFNTwitterAccount, TFNTwitterUser, TFNTwitterStatus, TFNTwitterScribeContext, TFNFollowButton, TFNCheckmarkControl, UISwitch, UIButton, UIActivityIndicatorView, TFNTwitterFollowerRequestControl, NSString;

@interface TFNTwitterFollowControl : UIView <TFNTwitterAuthenticated, TFNBinaryChoiceDelegate> {

	char _haveCustomTouchInsets;
	char _supportsChallenges;
	char _checkUserFlags;
	char _confirmUnfollow;
	char _showUnblocked;
	char _confirmBlock;
	TFNTwitterAccount* _account;
	int _followControlType;
	int _variant;
	TFNTwitterUser* _user;
	TFNTwitterStatus* _status;
	TFNTwitterScribeContext* _scribeContext;
	id<TFNTwitterFollowControlDelegate> _delegate;
	TFNFollowButton* _followButton;
	TFNCheckmarkControl* _squareCheckmarkControl;
	UISwitch* _deviceFollowSwitch;
	UIButton* _emailFollowButton;
	UIActivityIndicatorView* _spinner;
	TFNTwitterFollowerRequestControl* _followerRequestControl;
	TFNTwitterFollowerRequestControl* _listMemberRemoveControl;
	UIEdgeInsets _touchInsets;

}

@property (nonatomic,retain) TFNFollowButton * followButton;                                          //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) TFNCheckmarkControl * squareCheckmarkControl;                            //@synthesize squareCheckmarkControl=_squareCheckmarkControl - In the implementation block
@property (nonatomic,retain) UISwitch * deviceFollowSwitch;                                           //@synthesize deviceFollowSwitch=_deviceFollowSwitch - In the implementation block
@property (nonatomic,retain) UIButton * emailFollowButton;                                            //@synthesize emailFollowButton=_emailFollowButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                       //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) TFNTwitterFollowerRequestControl * followerRequestControl;               //@synthesize followerRequestControl=_followerRequestControl - In the implementation block
@property (nonatomic,retain) TFNTwitterFollowerRequestControl * listMemberRemoveControl;              //@synthesize listMemberRemoveControl=_listMemberRemoveControl - In the implementation block
@property (assign,nonatomic) int followControlType;                                                   //@synthesize followControlType=_followControlType - In the implementation block
@property (assign,nonatomic) int variant;                                                             //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) TFNTwitterUser * user;                                                   //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) TFNTwitterStatus * status;                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * scribeContext;                                 //@synthesize scribeContext=_scribeContext - In the implementation block
@property (assign,nonatomic) char checkUserFlags;                                                     //@synthesize checkUserFlags=_checkUserFlags - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterFollowControlDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char confirmUnfollow;                                                    //@synthesize confirmUnfollow=_confirmUnfollow - In the implementation block
@property (assign,nonatomic) char showUnblocked;                                                      //@synthesize showUnblocked=_showUnblocked - In the implementation block
@property (assign,nonatomic) char confirmBlock;                                                       //@synthesize confirmBlock=_confirmBlock - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchInsets;                                                //@synthesize touchInsets=_touchInsets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                             //@synthesize account=_account - In the implementation block
+(CGSize)sizeForFollowControlType:(int)arg1 variant:(int)arg2 user:(id)arg3 account:(id)arg4 ;
+(CGSize)_defaultSwitchSize;
+(id)_inFlightTaskForToken:(id)arg1 ;
+(void)_scribeAction:(id)arg1 forToken:(id)arg2 ;
+(void)_didFollowUserForToken:(id)arg1 obj:(id)arg2 success:(char)arg3 error:(id)arg4 ;
+(void)_didDeviceFollowUserFromSwitchForToken:(id)arg1 obj:(id)arg2 success:(char)arg3 error:(id)arg4 ;
+(void)_didDeviceUnfollowUserFromSwitchForToken:(id)arg1 obj:(id)arg2 success:(char)arg3 error:(id)arg4 ;
+(void)_didPerformActionWithToken:(id)arg1 success:(char)arg2 error:(id)arg3 ;
+(void)_didUnfollowUserForToken:(id)arg1 obj:(id)arg2 success:(char)arg3 error:(id)arg4 ;
+(void)_didCancelFollowUserRequestForToken:(id)arg1 obj:(id)arg2 success:(char)arg3 error:(id)arg4 ;
+(void)_didUnblockUserForToken:(id)arg1 obj:(id)arg2 success:(char)arg3 error:(id)arg4 ;
+(void)_didBlockUserForToken:(id)arg1 obj:(id)arg2 success:(char)arg3 error:(id)arg4 ;
+(void)_didAcceptFollowerRequestForToken:(id)arg1 obj:(id)arg2 success:(char)arg3 error:(id)arg4 ;
+(void)_didDeclineFollowerRequestForToken:(id)arg1 obj:(id)arg2 success:(char)arg3 error:(id)arg4 ;
-(TFNTwitterScribeContext *)scribeContext;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(void)setCheckUserFlags:(char)arg1 ;
-(void)setFollowControlType:(int)arg1 ;
-(int)followControlType;
-(TFNFollowButton *)followButton;
-(id)_promotedContent;
-(void)setConfirmBlock:(char)arg1 ;
-(void)setShowUnblocked:(char)arg1 ;
-(char)showUnblocked;
-(char)confirmBlock;
-(id)initWithFollowControlType:(int)arg1 variant:(int)arg2 ;
-(void)setFollowButton:(TFNFollowButton *)arg1 ;
-(void)setConfirmUnfollow:(char)arg1 ;
-(char)confirmUnfollow;
-(void)didAccept:(id)arg1 ;
-(void)didDecline:(id)arg1 ;
-(void)_updateAndRemoveAllControls:(char)arg1 animated:(char)arg2 ;
-(void)_updateButtonState;
-(void)_removeAllControls;
-(void)_updateFollowControl:(char)arg1 ;
-(void)_setupFollowerRequestControl;
-(void)_setupDeviceFollowSwitch;
-(void)_configureDeviceFollowSwitch;
-(void)_setupListMemberRemoveControl;
-(void)_setupSquareCheckmarkControl;
-(void)_configureSquareCheckmarkControl;
-(char)checkUserFlags;
-(void)_setupSpinner;
-(void)_setupFollowButton:(int)arg1 ;
-(void)_configureFollowButtonForButtonState:(int)arg1 ;
-(void)_followUser:(id)arg1 ;
-(void)_unfollowUser:(id)arg1 ;
-(void)_cancelPendingFollowRequest:(id)arg1 ;
-(void)_unblockUser:(id)arg1 ;
-(void)_doUnblockUser;
-(void)_blockUser:(id)arg1 ;
-(void)_doBlockUser;
-(void)_noop;
-(void)_squareCheckmarkControlTapped;
-(void)_configureFollowButton;
-(void)_deviceFollowSwitchDidChange:(id)arg1 ;
-(id)_willPerformAction:(int)arg1 ;
-(void)_doUnfollowUser;
-(void)_showActionSheetWithActionItems:(id)arg1 sender:(id)arg2 ;
-(void)_doCancelPendingFollowRequest;
-(void)_deviceFollowUserFromSwitch;
-(void)_deviceUnfollowUserFromSwitch;
-(UISwitch *)deviceFollowSwitch;
-(TFNTwitterFollowerRequestControl *)followerRequestControl;
-(TFNTwitterFollowerRequestControl *)listMemberRemoveControl;
-(TFNCheckmarkControl *)squareCheckmarkControl;
-(void)setSquareCheckmarkControl:(TFNCheckmarkControl *)arg1 ;
-(void)setDeviceFollowSwitch:(UISwitch *)arg1 ;
-(UIButton *)emailFollowButton;
-(void)setEmailFollowButton:(UIButton *)arg1 ;
-(void)setFollowerRequestControl:(TFNTwitterFollowerRequestControl *)arg1 ;
-(void)setListMemberRemoveControl:(TFNTwitterFollowerRequestControl *)arg1 ;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)touchInsets;
-(void)setDelegate:(id<TFNTwitterFollowControlDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(char)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<TFNTwitterFollowControlDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(int)variant;
-(void)setVariant:(int)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)updateState:(char)arg1 ;
@end

