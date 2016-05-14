/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol MNAvatarImageDecorating, MNThreadDetailsHeaderViewDelegate;
@class UILabel, UITextField, UIImageView, UIButton, UITapGestureRecognizer, MNProfileImageView, NSString, FBStringWithRedactedDescription;

@interface MNThreadDetailsHeaderView : UIView <UITextFieldDelegate> {

	UILabel* _threadNameLabel;
	UILabel* _threadTimeLabel;
	UILabel* _usernameLabel;
	UITextField* _editThreadNameTextField;
	UIImageView* _threadImageMaskView;
	UIButton* _changePictureButton;
	UIButton* _changeNameButton;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	char _isThreadNameCustom;
	char _isEditing;
	MNProfileImageView* _threadImageView;
	NSString* _presenceText;
	NSString* _usernameText;
	FBStringWithRedactedDescription* _threadNameText;
	unsigned _badgeType;
	id<MNThreadDetailsHeaderViewDelegate> _delegate;

}

@property (nonatomic,readonly) MNProfileImageView * threadImageView;                                   //@synthesize threadImageView=_threadImageView - In the implementation block
@property (nonatomic,copy) NSString * presenceText;                                                    //@synthesize presenceText=_presenceText - In the implementation block
@property (nonatomic,copy) NSString * usernameText;                                                    //@synthesize usernameText=_usernameText - In the implementation block
@property (nonatomic,copy) FBStringWithRedactedDescription * threadNameText;                           //@synthesize threadNameText=_threadNameText - In the implementation block
@property (assign,nonatomic) char isThreadNameCustom;                                                  //@synthesize isThreadNameCustom=_isThreadNameCustom - In the implementation block
@property (assign,nonatomic) unsigned badgeType;                                                       //@synthesize badgeType=_badgeType - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadDetailsHeaderViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isEditing;                                                           //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,getter=isImageViewButtonEnabled,nonatomic) char imageViewButtonEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 avatarImageDecoration:(id)arg2 ;
-(NSString *)presenceText;
-(void)setPresenceText:(NSString *)arg1 ;
-(void)setThreadNameText:(FBStringWithRedactedDescription *)arg1 ;
-(void)setIsThreadNameCustom:(char)arg1 ;
-(MNProfileImageView *)threadImageView;
-(void)_didTapHeaderView:(id)arg1 ;
-(void)_changeNameButtonPressed:(id)arg1 ;
-(void)_changeNameButtonTouchUpOutside:(id)arg1 ;
-(void)_changeNameButtonTouchDown:(id)arg1 ;
-(void)_changeNameButtonTouchCancel:(id)arg1 ;
-(void)_changePictureButtonPressed:(id)arg1 ;
-(void)setIsEditing:(char)arg1 showKeyboard:(char)arg2 ;
-(void)showKeyboard:(char)arg1 ;
-(void)_layoutSubviewsWithBounds:(CGRect)arg1 ;
-(void)_setThreadNameHighlighted:(char)arg1 ;
-(id)threadNameTextFieldText;
-(void)setIsEditing:(char)arg1 ;
-(char)isImageViewButtonEnabled;
-(void)setImageViewButtonEnabled:(char)arg1 ;
-(NSString *)usernameText;
-(FBStringWithRedactedDescription *)threadNameText;
-(char)isThreadNameCustom;
-(unsigned)badgeType;
-(void)setBadgeType:(unsigned)arg1 ;
-(void)setDelegate:(id<MNThreadDetailsHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNThreadDetailsHeaderViewDelegate>)delegate;
-(char)isEditing;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)setUsernameText:(NSString *)arg1 ;
@end

