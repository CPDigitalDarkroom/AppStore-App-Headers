/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNForm.h>
#import <TFNUI/TFNAttributedTextViewDelegate.h>

@class TFNFormField, T1AuthenticationFormTogglePasswordTextView, NSString;

@interface T1AuthenticationForm : TFNForm <TFNAttributedTextViewDelegate> {

	TFNFormField* _usernameField;
	TFNFormField* _passwordField;
	T1AuthenticationFormTogglePasswordTextView* _togglePasswordField;

}

@property (nonatomic,retain) TFNFormField * usernameField;                                                  //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) TFNFormField * passwordField;                                                  //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) T1AuthenticationFormTogglePasswordTextView * togglePasswordField;              //@synthesize togglePasswordField=_togglePasswordField - In the implementation block
@property (nonatomic,copy) NSString * usernameText; 
@property (nonatomic,copy) NSString * passwordText; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)usernameText;
-(T1AuthenticationFormTogglePasswordTextView *)togglePasswordField;
-(void)setTogglePasswordField:(T1AuthenticationFormTogglePasswordTextView *)arg1 ;
-(void)_accountsLoadingStatusDidChange;
-(void)setSubmittable:(char)arg1 ;
-(TFNFormField *)usernameField;
-(void)setUsernameField:(TFNFormField *)arg1 ;
-(void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(CGRect)arg3 ;
-(void)dealloc;
-(id)init;
-(TFNFormField *)passwordField;
-(void)setPasswordField:(TFNFormField *)arg1 ;
-(void)setPasswordText:(NSString *)arg1 ;
-(void)setUsernameText:(NSString *)arg1 ;
-(void)_textFieldTextDidChange:(id)arg1 ;
-(NSString *)passwordText;
@end

