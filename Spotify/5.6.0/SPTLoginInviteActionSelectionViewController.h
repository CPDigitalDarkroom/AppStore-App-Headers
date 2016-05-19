/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTWelcomeViewController.h>
#import <Spotify/SPTThemableViewLayoutDelegate.h>

@class SignupController, SPTLoginInviteController, UIButton, UIImageView, UILabel, NSString;

@interface SPTLoginInviteActionSelectionViewController : SPTWelcomeViewController <SPTThemableViewLayoutDelegate> {

	SignupController* _signupController;
	SPTLoginInviteController* _inviteController;
	UIButton* _haveInviteButton;
	UIButton* _requestInviteButton;
	UIImageView* _logo;
	UILabel* _message;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SignupController * signupController;                      //@synthesize signupController=_signupController - In the implementation block
@property (nonatomic,readonly) SPTLoginInviteController * inviteController;              //@synthesize inviteController=_inviteController - In the implementation block
@property (nonatomic,retain) UIButton * haveInviteButton;                                //@synthesize haveInviteButton=_haveInviteButton - In the implementation block
@property (nonatomic,retain) UIButton * requestInviteButton;                             //@synthesize requestInviteButton=_requestInviteButton - In the implementation block
@property (nonatomic,retain) UIImageView * logo;                                         //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) UILabel * message;                                          //@synthesize message=_message - In the implementation block
-(id)viewEventURI;
-(void)themableViewDidUpdateLayout:(id)arg1 ;
-(void)userDidTouchHaveInviteButton:(id)arg1 ;
-(void)setHaveInviteButton:(UIButton *)arg1 ;
-(void)userDidTouchRequestInviteButton:(id)arg1 ;
-(void)setRequestInviteButton:(UIButton *)arg1 ;
-(void)navigateToPreviousView;
-(SignupController *)signupController;
-(SPTLoginInviteController *)inviteController;
-(id)initWithSignupController:(id)arg1 inviteController:(id)arg2 loginStateController:(id)arg3 networkConnectivityController:(id)arg4 ;
-(UIButton *)haveInviteButton;
-(UIButton *)requestInviteButton;
-(UILabel *)message;
-(void)viewDidLoad;
-(void)setMessage:(UILabel *)arg1 ;
-(UIImageView *)logo;
-(void)setLogo:(UIImageView *)arg1 ;
@end

