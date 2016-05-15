/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNNativesqueSingleWebViewController.h>
#import <Twitter/T1AccountAdder.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class NSString, TFNTwitterAccount;

@interface T1PasswordResetViewController : TFNNativesqueSingleWebViewController <T1AccountAdder, WKNavigationDelegate> {

	NSString* _webviewUrl;
	NSString* _requestID;
	long long _userID;
	NSString* _username;
	NSString* _appRestartSuppressToken;
	/*^block*/id _didAddAccountBlock;
	TFNTwitterAccount* _account;

}

@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didAddAccountBlock;                      //@synthesize didAddAccountBlock=_didAddAccountBlock - In the implementation block
+(void)presentPasswordResetFromViewController:(id)arg1 withUsername:(id)arg2 urlString:(id)arg3 ;
+(char)isShowing;
-(id)didAddAccountBlock;
-(void)setDidAddAccountBlock:(id)arg1 ;
-(id)initWithWebViewURL:(id)arg1 ;
-(char)shouldStartLoadWithRequest:(id)arg1 navigationType:(int)arg2 ;
-(void)_dismissWithAccount:(id)arg1 ;
-(void)_resumeAppRestartsWithToken;
-(char)_isValidURLSchema:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_cancel;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

