/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSURL, NSDictionary, UIWebView, UINavigationBar, NSString;

@interface XKInAppBrowserViewController : UIViewController <UIWebViewDelegate> {

	NSURL* _url;
	NSDictionary* _metaData;
	UIWebView* _webView;
	UINavigationBar* _navigationBar;
	/*^block*/id _openUrlBlock;
	/*^block*/id _backPressedBlock;

}

@property (nonatomic,retain,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * metaData;                      //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                          //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UINavigationBar * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,copy) id openUrlBlock;                                //@synthesize openUrlBlock=_openUrlBlock - In the implementation block
@property (nonatomic,copy) id backPressedBlock;                            //@synthesize backPressedBlock=_backPressedBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadContent:(id)arg1 ;
-(id)openUrlBlock;
-(void)openURLInExternalBrowser:(/*^block*/id)arg1 ;
-(void)setOpenUrlBlock:(id)arg1 ;
-(void)openInExternalBrowser:(id)arg1 ;
-(void)onEnteredForeground:(id)arg1 ;
-(CGRect)determineNavigationBarFrame;
-(void)onOpenInExternalBrowserButtonPress;
-(void)onBackButtonPress;
-(CGRect)determineWebViewFrame;
-(void)subscribeToNotifications;
-(void)unsubscribeFromNotifications;
-(void)setTitle:(id)arg1 subTitle:(id)arg2 ;
-(void)onEnteredBackground:(id)arg1 ;
-(void)alertWebViewOnEnteredBackground;
-(void)alertWebViewOnEnteredForeground;
-(id)jsonStringFromDictionary:(id)arg1 ;
-(void)sendEventToWebView:(id)arg1 withArgument:(id)arg2 ;
-(id)backPressedBlock;
-(void)alertWebViewOnReady;
-(void)alertWebViewMetaData;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(void)setBackPressedBlock:(id)arg1 ;
-(UINavigationBar *)navigationBar;
-(NSURL *)url;
-(char)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(char)shouldAutorotate;
-(void)loadView;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)cancelButtonPressed:(/*^block*/id)arg1 ;
-(NSDictionary *)metaData;
-(id)initWithMetadata:(id)arg1 ;
@end

