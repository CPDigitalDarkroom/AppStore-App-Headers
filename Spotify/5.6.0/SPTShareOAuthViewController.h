/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol SPTShareOAuthViewControllerDelegate;
@class NSURLRequest, UIWebView, NSString;

@interface SPTShareOAuthViewController : UIViewController <UIWebViewDelegate> {

	id<SPTShareOAuthViewControllerDelegate> _delegate;
	int _network;
	NSURLRequest* _request;
	UIWebView* _webView;

}

@property (assign,nonatomic,__weak) id<SPTShareOAuthViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int network;                                                          //@synthesize network=_network - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                                               //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                                  //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapCancel;
-(void)closeViewController;
-(id)initWithNetwork:(int)arg1 request:(id)arg2 ;
-(void)setDelegate:(id<SPTShareOAuthViewControllerDelegate>)arg1 ;
-(id<SPTShareOAuthViewControllerDelegate>)delegate;
-(NSURLRequest *)request;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(int)network;
-(void)setNetwork:(int)arg1 ;
@end

